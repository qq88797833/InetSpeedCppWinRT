// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.Devices.WiFi.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_670a3c41_ecc8_55c2_84d4_51864496a328
#define WINRT_GENERIC_670a3c41_ecc8_55c2_84d4_51864496a328
template <> struct __declspec(uuid("670a3c41-ecc8-55c2-84d4-51864496a328")) __declspec(novtable) IVectorView<Windows::Devices::WiFi::WiFiAdapter> : impl_IVectorView<Windows::Devices::WiFi::WiFiAdapter> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_1dcf739d_10b7_59e9_ab47_8b0277e20193
#define WINRT_GENERIC_1dcf739d_10b7_59e9_ab47_8b0277e20193
template <> struct __declspec(uuid("1dcf739d-10b7-59e9-ab47-8b0277e20193")) __declspec(novtable) IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter> : impl_IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter> {};
#endif

#ifndef WINRT_GENERIC_f8c75a3a_739a_57aa_986d_1f7604d7e386
#define WINRT_GENERIC_f8c75a3a_739a_57aa_986d_1f7604d7e386
template <> struct __declspec(uuid("f8c75a3a-739a-57aa-986d-1f7604d7e386")) __declspec(novtable) IAsyncOperation<winrt::Windows::Devices::WiFi::WiFiAccessStatus> : impl_IAsyncOperation<winrt::Windows::Devices::WiFi::WiFiAccessStatus> {};
#endif

#ifndef WINRT_GENERIC_f6c02d1b_43e8_5fc8_8e8e_ee7b8094b683
#define WINRT_GENERIC_f6c02d1b_43e8_5fc8_8e8e_ee7b8094b683
template <> struct __declspec(uuid("f6c02d1b-43e8-5fc8-8e8e-ee7b8094b683")) __declspec(novtable) TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::IInspectable> : impl_TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_ffa41f49_4c30_50d3_9549_e4f055b417b4
#define WINRT_GENERIC_ffa41f49_4c30_50d3_9549_e4f055b417b4
template <> struct __declspec(uuid("ffa41f49-4c30-50d3-9549-e4f055b417b4")) __declspec(novtable) IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> : impl_IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_7c65d286_7285_5d63_bdea_5ef951bdf618
#define WINRT_GENERIC_7c65d286_7285_5d63_bdea_5ef951bdf618
template <> struct __declspec(uuid("7c65d286-7285-5d63-bdea-5ef951bdf618")) __declspec(novtable) IVectorView<Windows::Devices::WiFi::WiFiAvailableNetwork> : impl_IVectorView<Windows::Devices::WiFi::WiFiAvailableNetwork> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_35362f75_6aae_560d_b3d0_3fae9c7260a8
#define WINRT_GENERIC_35362f75_6aae_560d_b3d0_3fae9c7260a8
template <> struct __declspec(uuid("35362f75-6aae-560d-b3d0-3fae9c7260a8")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::WiFi::WiFiAdapter> : impl_AsyncOperationCompletedHandler<Windows::Devices::WiFi::WiFiAdapter> {};
#endif

#ifndef WINRT_GENERIC_65e889ca_f6c9_5c75_bef9_05ab88a49a54
#define WINRT_GENERIC_65e889ca_f6c9_5c75_bef9_05ab88a49a54
template <> struct __declspec(uuid("65e889ca-f6c9-5c75-bef9-05ab88a49a54")) __declspec(novtable) AsyncOperationCompletedHandler<winrt::Windows::Devices::WiFi::WiFiAccessStatus> : impl_AsyncOperationCompletedHandler<winrt::Windows::Devices::WiFi::WiFiAccessStatus> {};
#endif

#ifndef WINRT_GENERIC_f380eb8d_1e52_5350_a288_861c963a84f0
#define WINRT_GENERIC_f380eb8d_1e52_5350_a288_861c963a84f0
template <> struct __declspec(uuid("f380eb8d-1e52-5350-a288-861c963a84f0")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::WiFi::WiFiConnectionResult> : impl_AsyncOperationCompletedHandler<Windows::Devices::WiFi::WiFiConnectionResult> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_468677c4_ebb9_5196_836d_72faa9fe673e
#define WINRT_GENERIC_468677c4_ebb9_5196_836d_72faa9fe673e
template <> struct __declspec(uuid("468677c4-ebb9-5196-836d-72faa9fe673e")) __declspec(novtable) IIterator<Windows::Devices::WiFi::WiFiAvailableNetwork> : impl_IIterator<Windows::Devices::WiFi::WiFiAvailableNetwork> {};
#endif

#ifndef WINRT_GENERIC_f17484ea_c71e_5d3e_b74c_3a0e61dd9c20
#define WINRT_GENERIC_f17484ea_c71e_5d3e_b74c_3a0e61dd9c20
template <> struct __declspec(uuid("f17484ea-c71e-5d3e-b74c-3a0e61dd9c20")) __declspec(novtable) IIterable<Windows::Devices::WiFi::WiFiAvailableNetwork> : impl_IIterable<Windows::Devices::WiFi::WiFiAvailableNetwork> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_3140802b_987c_5c56_a430_90fbc1898dda
#define WINRT_GENERIC_3140802b_987c_5c56_a430_90fbc1898dda
template <> struct __declspec(uuid("3140802b-987c-5c56-a430-90fbc1898dda")) __declspec(novtable) IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>> : impl_IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>> {};
#endif

#ifndef WINRT_GENERIC_92902a07_2f18_56e9_87fb_24fe19f70688
#define WINRT_GENERIC_92902a07_2f18_56e9_87fb_24fe19f70688
template <> struct __declspec(uuid("92902a07-2f18-56e9-87fb-24fe19f70688")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>> : impl_AsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>> {};
#endif


}

namespace Windows::Devices::WiFi {

template <typename D>
class WINRT_EBO impl_IWiFiAdapter
{
    auto shim() const { return impl::shim<D, IWiFiAdapter>(this); }

public:

    Windows::Networking::Connectivity::NetworkAdapter NetworkAdapter() const;
    Windows::Foundation::IAsyncAction ScanAsync() const;
    Windows::Devices::WiFi::WiFiNetworkReport NetworkReport() const;
    event_token AvailableNetworksChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::IInspectable> & args) const;
    using AvailableNetworksChanged_revoker = event_revoker<IWiFiAdapter>;
    AvailableNetworksChanged_revoker AvailableNetworksChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::WiFi::WiFiAdapter, Windows::IInspectable> & args) const;
    void AvailableNetworksChanged(event_token eventCookie) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> ConnectAsync(const Windows::Devices::WiFi::WiFiAvailableNetwork & availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> ConnectAsync(const Windows::Devices::WiFi::WiFiAvailableNetwork & availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind, const Windows::Security::Credentials::PasswordCredential & passwordCredential) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiConnectionResult> ConnectAsync(const Windows::Devices::WiFi::WiFiAvailableNetwork & availableNetwork, Windows::Devices::WiFi::WiFiReconnectionKind reconnectionKind, const Windows::Security::Credentials::PasswordCredential & passwordCredential, hstring_ref ssid) const;
    void Disconnect() const;
};

template <typename D>
class WINRT_EBO impl_IWiFiAdapterStatics
{
    auto shim() const { return impl::shim<D, IWiFiAdapterStatics>(this); }

public:

    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAdapter>> FindAllAdaptersAsync() const;
    hstring GetDeviceSelector() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::WiFi::WiFiAdapter> FromIdAsync(hstring_ref deviceId) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::WiFi::WiFiAccessStatus> RequestAccessAsync() const;
};

template <typename D>
class WINRT_EBO impl_IWiFiAvailableNetwork
{
    auto shim() const { return impl::shim<D, IWiFiAvailableNetwork>(this); }

public:

    Windows::Foundation::TimeSpan Uptime() const;
    hstring Ssid() const;
    hstring Bssid() const;
    int32_t ChannelCenterFrequencyInKilohertz() const;
    double NetworkRssiInDecibelMilliwatts() const;
    uint8_t SignalBars() const;
    Windows::Devices::WiFi::WiFiNetworkKind NetworkKind() const;
    Windows::Devices::WiFi::WiFiPhyKind PhyKind() const;
    Windows::Networking::Connectivity::NetworkSecuritySettings SecuritySettings() const;
    Windows::Foundation::TimeSpan BeaconInterval() const;
    bool IsWiFiDirect() const;
};

template <typename D>
class WINRT_EBO impl_IWiFiConnectionResult
{
    auto shim() const { return impl::shim<D, IWiFiConnectionResult>(this); }

public:

    Windows::Devices::WiFi::WiFiConnectionStatus ConnectionStatus() const;
};

template <typename D>
class WINRT_EBO impl_IWiFiNetworkReport
{
    auto shim() const { return impl::shim<D, IWiFiNetworkReport>(this); }

public:

    Windows::Foundation::DateTime Timestamp() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::WiFi::WiFiAvailableNetwork> AvailableNetworks() const;
};

struct IWiFiAdapter :
    Windows::IInspectable,
    impl::consume<IWiFiAdapter>
{
    IWiFiAdapter(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiAdapter>(m_ptr); }
};

struct IWiFiAdapterStatics :
    Windows::IInspectable,
    impl::consume<IWiFiAdapterStatics>
{
    IWiFiAdapterStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiAdapterStatics>(m_ptr); }
};

struct IWiFiAvailableNetwork :
    Windows::IInspectable,
    impl::consume<IWiFiAvailableNetwork>
{
    IWiFiAvailableNetwork(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiAvailableNetwork>(m_ptr); }
};

struct IWiFiConnectionResult :
    Windows::IInspectable,
    impl::consume<IWiFiConnectionResult>
{
    IWiFiConnectionResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiConnectionResult>(m_ptr); }
};

struct IWiFiNetworkReport :
    Windows::IInspectable,
    impl::consume<IWiFiNetworkReport>
{
    IWiFiNetworkReport(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IWiFiNetworkReport>(m_ptr); }
};

}

}
