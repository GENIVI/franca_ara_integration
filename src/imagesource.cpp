// SPDX-License-Identifier: MPL-2.0

// (C) 2018 GENIVI Alliance
// This file is part of FRANCA--ARA integration demo/pilot project
#include "imagesource.h"

#include <QDebug>
#include <QElapsedTimer>
#include <QImageReader>
#include <QQmlContext>
#include <QQuickView>
#include <QQmlEngine>

#include "SomeIpNetworkThreadTypes.h"
#include <iostream>
#include <math.h>
#include <vector>

#define IMAGE_FEED_PATH "/usr/local/share/franca-ara/images"
#define MAX_IMAGE_ID 228

// Internal helpers

// Just a safety check to avoid ridiculous behavior if buggy input
static int limit_id(int id) {
   // TODO: report if index is outside limits
   // Use DLT.  Possibly QDebug wrapper on DLT
   return std::max(0, std::min(MAX_IMAGE_ID, id));
}

static QString image_url(int frameId)
{
    //qDebug() << QString("%1/l_image%2.png").arg(IMAGE_FEED_PATH).arg(frameId);
    auto s = QString("%1/l_image%2.png").arg(IMAGE_FEED_PATH).arg(frameId);
    return QString("%1/l_image%2.png").arg(IMAGE_FEED_PATH).arg(frameId);
}

ImageSource::ImageSource() {
   // Initialize vector of images (for performance reason)
    QImageReader reader;
    for (int i = 0 ; i <= MAX_IMAGE_ID ; ++i) {
       reader.setFileName(image_url(i));
       m_image_vector.push_back(reader.read());
    }
}

// Public functions called by networking class/thread:

// Init, called from main at startup
void ImageSource::connectImageProvider(QQuickView &view)
{
    std::cout << "LOG(connecting)" << std::endl;

    view.engine()->addImageProvider("imageprovider", &_provider);
    view.engine()->rootContext()->setContextProperty("imageprovider",
                                                     &_provider);

    QObject::connect(this, SIGNAL(imageReady(const QImage &)), &_provider,
                     SLOT(setImage(const QImage &)));

    // Put ourselves (image source) as the source of some meta data to QML
    view.engine()->rootContext()->setContextProperty("imagesource",
                                                     this);
}

void ImageSource::newFrameId(int frameID) {
    emit imageReady(m_image_vector[limit_id(frameID)]);
}

void ImageSource::newVehicleIdentification () {
   //std::cerr << "emit vehicleIdentified" << std::endl;
   emit vehicleIdentified(); // Signal to QML
}
