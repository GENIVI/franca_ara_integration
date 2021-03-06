/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.12.v201801251434.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/

#ifndef V1_GENIVI_AASR_SHOWCASE_I_Vehicles_SOMEIP_DEPLOYMENT_HPP_
#define V1_GENIVI_AASR_SHOWCASE_I_Vehicles_SOMEIP_DEPLOYMENT_HPP_


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif
#include <CommonAPI/SomeIP/Deployment.hpp>
#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace genivi {
namespace aasr {
namespace showcase {
namespace IVehicles_ {

// Interface-specific deployment types
typedef CommonAPI::SomeIP::EnumerationDeployment<int32_t> FloatingPointPrecisionDeployment_t;
typedef CommonAPI::SomeIP::StructDeployment<
    CommonAPI::EmptyDeployment,
    CommonAPI::EmptyDeployment
> FlexibleFloatingPointDeployment_t;
typedef CommonAPI::SomeIP::StructDeployment<
    ::v1::genivi::aasr::showcase::IVehicles_::FloatingPointPrecisionDeployment_t,
    CommonAPI::SomeIP::StructDeployment<
        CommonAPI::EmptyDeployment,
        CommonAPI::EmptyDeployment
    >
> FlexibleFloatingPointContainerDeployment_t;
typedef CommonAPI::SomeIP::StructDeployment<
    CommonAPI::SomeIP::IntegerDeployment<uint32_t>,
    CommonAPI::SomeIP::IntegerDeployment<uint32_t>,
    CommonAPI::SomeIP::IntegerDeployment<uint32_t>,
    CommonAPI::SomeIP::IntegerDeployment<uint32_t>
> BoundingBoxDeployment_t;
typedef CommonAPI::SomeIP::StructDeployment<
    CommonAPI::SomeIP::IntegerDeployment<uint8_t>,
    CommonAPI::SomeIP::StructDeployment<
        ::v1::genivi::aasr::showcase::IVehicles_::FloatingPointPrecisionDeployment_t,
        CommonAPI::SomeIP::StructDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment
        >
    >,
    CommonAPI::SomeIP::StructDeployment<
        ::v1::genivi::aasr::showcase::IVehicles_::FloatingPointPrecisionDeployment_t,
        CommonAPI::SomeIP::StructDeployment<
            CommonAPI::EmptyDeployment,
            CommonAPI::EmptyDeployment
        >
    >
> VehicleDeployment_t;
typedef CommonAPI::SomeIP::StructDeployment<
    CommonAPI::SomeIP::IntegerDeployment<uint16_t>,
    CommonAPI::SomeIP::StructDeployment<
        CommonAPI::SomeIP::IntegerDeployment<uint8_t>,
        CommonAPI::SomeIP::StructDeployment<
            ::v1::genivi::aasr::showcase::IVehicles_::FloatingPointPrecisionDeployment_t,
            CommonAPI::SomeIP::StructDeployment<
                CommonAPI::EmptyDeployment,
                CommonAPI::EmptyDeployment
            >
        >,
        CommonAPI::SomeIP::StructDeployment<
            ::v1::genivi::aasr::showcase::IVehicles_::FloatingPointPrecisionDeployment_t,
            CommonAPI::SomeIP::StructDeployment<
                CommonAPI::EmptyDeployment,
                CommonAPI::EmptyDeployment
            >
        >
    >,
    CommonAPI::SomeIP::StructDeployment<
        CommonAPI::SomeIP::IntegerDeployment<uint32_t>,
        CommonAPI::SomeIP::IntegerDeployment<uint32_t>,
        CommonAPI::SomeIP::IntegerDeployment<uint32_t>,
        CommonAPI::SomeIP::IntegerDeployment<uint32_t>
    >
> ListOfVehiclesDeployment_t;

// Type-specific deployments

// Attribute-specific deployments

// Argument-specific deployment

// Broadcast-specific deployments

} // namespace IVehicles_
} // namespace showcase
} // namespace aasr
} // namespace genivi
} // namespace v1

#endif // V1_GENIVI_AASR_SHOWCASE_I_Vehicles_SOMEIP_DEPLOYMENT_HPP_
