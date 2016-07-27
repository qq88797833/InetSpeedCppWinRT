// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "base.h"
#include "Windows.Devices.Adc.0.h"
#include "Windows.Devices.Adc.Provider.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Adc {

struct __declspec(uuid("040bf414-2588-4a56-abef-73a260acc60a")) __declspec(novtable) IAdcChannel : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Controller(Windows::Devices::Adc::IAdcController ** value) = 0;
    virtual HRESULT __stdcall abi_ReadValue(int32_t * result) = 0;
    virtual HRESULT __stdcall abi_ReadRatio(double * result) = 0;
};

struct __declspec(uuid("2a76e4b0-a896-4219-86b6-ea8cdce98f56")) __declspec(novtable) IAdcController : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ChannelCount(int32_t * value) = 0;
    virtual HRESULT __stdcall get_ResolutionInBits(int32_t * value) = 0;
    virtual HRESULT __stdcall get_MinValue(int32_t * value) = 0;
    virtual HRESULT __stdcall get_MaxValue(int32_t * value) = 0;
    virtual HRESULT __stdcall get_ChannelMode(winrt::Windows::Devices::Adc::AdcChannelMode * value) = 0;
    virtual HRESULT __stdcall put_ChannelMode(winrt::Windows::Devices::Adc::AdcChannelMode value) = 0;
    virtual HRESULT __stdcall abi_IsChannelModeSupported(winrt::Windows::Devices::Adc::AdcChannelMode channelMode, bool * result) = 0;
    virtual HRESULT __stdcall abi_OpenChannel(int32_t channelNumber, Windows::Devices::Adc::IAdcChannel ** result) = 0;
};

struct __declspec(uuid("cce98e0c-01f8-4891-bc3b-be53ef279ca4")) __declspec(novtable) IAdcControllerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetControllersAsync(Windows::Devices::Adc::Provider::IAdcProvider * provider, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Adc::AdcController>> ** operation) = 0;
};

struct __declspec(uuid("a2b93b1d-977b-4f5a-a5fe-a6abaffe6484")) __declspec(novtable) IAdcControllerStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefaultAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Adc::AdcController> ** operation) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Adc::AdcChannel> { using default_interface = Windows::Devices::Adc::IAdcChannel; };
template <> struct traits<Windows::Devices::Adc::AdcController> { using default_interface = Windows::Devices::Adc::IAdcController; };

}

namespace Windows::Devices::Adc {

template <typename T> class impl_IAdcChannel;
template <typename T> class impl_IAdcController;
template <typename T> class impl_IAdcControllerStatics;
template <typename T> class impl_IAdcControllerStatics2;

}

namespace impl {

template <> struct traits<Windows::Devices::Adc::IAdcChannel>
{
    using abi = ABI::Windows::Devices::Adc::IAdcChannel;
    template <typename D> using consume = Windows::Devices::Adc::impl_IAdcChannel<D>;
};

template <> struct traits<Windows::Devices::Adc::IAdcController>
{
    using abi = ABI::Windows::Devices::Adc::IAdcController;
    template <typename D> using consume = Windows::Devices::Adc::impl_IAdcController<D>;
};

template <> struct traits<Windows::Devices::Adc::IAdcControllerStatics>
{
    using abi = ABI::Windows::Devices::Adc::IAdcControllerStatics;
    template <typename D> using consume = Windows::Devices::Adc::impl_IAdcControllerStatics<D>;
};

template <> struct traits<Windows::Devices::Adc::IAdcControllerStatics2>
{
    using abi = ABI::Windows::Devices::Adc::IAdcControllerStatics2;
    template <typename D> using consume = Windows::Devices::Adc::impl_IAdcControllerStatics2<D>;
};

template <> struct traits<Windows::Devices::Adc::AdcChannel>
{
    using abi = ABI::Windows::Devices::Adc::AdcChannel;
    using default_interface = Windows::Devices::Adc::IAdcChannel;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Adc.AdcChannel"; }
};

template <> struct traits<Windows::Devices::Adc::AdcController>
{
    using abi = ABI::Windows::Devices::Adc::AdcController;
    using default_interface = Windows::Devices::Adc::IAdcController;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Adc.AdcController"; }
};

}

}
