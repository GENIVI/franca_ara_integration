/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.someip 3.1.12.v201801251434.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_GENIVI_AASR_SHOWCASE_I_VEHICLES_SOMEIP_PROXY_HPP_
#define V1_GENIVI_AASR_SHOWCASE_I_VEHICLES_SOMEIP_PROXY_HPP_

#include <v1/genivi/aasr/showcase/IVehiclesProxyBase.hpp>
#include <v1/genivi/aasr/showcase/IVehiclesSomeIPDeployment.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Proxy.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Attribute.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

# if defined(_MSC_VER)
#  if _MSC_VER >= 1300
/*
 * Diamond inheritance is used for the CommonAPI::Proxy base class.
 * The Microsoft compiler put warning (C4250) using a desired c++ feature: "Delegating to a sister class"
 * A powerful technique that arises from using virtual inheritance is to delegate a method from a class in another class
 * by using a common abstract base class. This is also called cross delegation.
 */
#    pragma warning( disable : 4250 )
#  endif
# endif

namespace v1 {
namespace genivi {
namespace aasr {
namespace showcase {

class IVehiclesSomeIPProxy
    : virtual public IVehiclesProxyBase,
    virtual public CommonAPI::SomeIP::Proxy {
public:
    IVehiclesSomeIPProxy(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection);

    virtual ~IVehiclesSomeIPProxy() { }

    virtual VehiclesAttribute& getVehiclesAttribute();


    virtual void SetFloatingPointPrecision(const IVehicles::FloatingPointPrecision &_precision, CommonAPI::CallStatus &_internalCallStatus, bool &_rv, const CommonAPI::CallInfo *_info);
    virtual std::future<CommonAPI::CallStatus> SetFloatingPointPrecisionAsync(const IVehicles::FloatingPointPrecision &_precision, SetFloatingPointPrecisionAsyncCallback _callback, const CommonAPI::CallInfo *_info);


    virtual void getOwnVersion(uint16_t &_major, uint16_t &_minor) const;

private:

    CommonAPI::SomeIP::ObservableAttribute<CommonAPI::SomeIP::Attribute<VehiclesAttribute, ::v1::genivi::aasr::showcase::IVehicles_::ListOfVehiclesDeployment_t>> vehicles_;


};

} // namespace showcase
} // namespace aasr
} // namespace genivi
} // namespace v1

#endif // V1_GENIVI_AASR_SHOWCASE_I_Vehicles_SOMEIP_PROXY_HPP_