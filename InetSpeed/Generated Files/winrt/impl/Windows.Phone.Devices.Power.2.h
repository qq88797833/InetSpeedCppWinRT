// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.200316.3

#ifndef WINRT_Windows_Phone_Devices_Power_2_H
#define WINRT_Windows_Phone_Devices_Power_2_H
#include "winrt/impl/Windows.Phone.Devices.Power.1.h"
WINRT_EXPORT namespace winrt::Windows::Phone::Devices::Power
{
    struct __declspec(empty_bases) Battery : Windows::Phone::Devices::Power::IBattery
    {
        Battery(std::nullptr_t) noexcept {}
        Battery(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Phone::Devices::Power::IBattery(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
}
#endif
