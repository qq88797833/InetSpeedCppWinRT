// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "base.h"
#include "Windows.Devices.Enumeration.0.h"
#include "Windows.ApplicationModel.Background.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Enumeration {

struct __declspec(uuid("deda0bcc-4f9d-4f58-9dba-a9bc800408d5")) __declspec(novtable) IDeviceAccessChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Enumeration::DeviceAccessStatus * value) = 0;
};

struct __declspec(uuid("82523262-934b-4b30-a178-adc39f2f2be3")) __declspec(novtable) IDeviceAccessChangedEventArgs2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
};

struct __declspec(uuid("0baa9a73-6de5-4915-8ddd-9a0554a6f545")) __declspec(novtable) IDeviceAccessInformation : Windows::IInspectable
{
    virtual HRESULT __stdcall add_AccessChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceAccessInformation, Windows::Devices::Enumeration::DeviceAccessChangedEventArgs> * handler, event_token * cookie) = 0;
    virtual HRESULT __stdcall remove_AccessChanged(event_token cookie) = 0;
    virtual HRESULT __stdcall get_CurrentStatus(winrt::Windows::Devices::Enumeration::DeviceAccessStatus * status) = 0;
};

struct __declspec(uuid("574bd3d3-5f30-45cd-8a94-724fe5973084")) __declspec(novtable) IDeviceAccessInformationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFromId(hstring deviceId, Windows::Devices::Enumeration::IDeviceAccessInformation ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFromDeviceClassId(GUID deviceClassId, Windows::Devices::Enumeration::IDeviceAccessInformation ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFromDeviceClass(winrt::Windows::Devices::Enumeration::DeviceClass deviceClass, Windows::Devices::Enumeration::IDeviceAccessInformation ** value) = 0;
};

struct __declspec(uuid("b8578c0c-bbc1-484b-bffa-7b31dcc200b2")) __declspec(novtable) IDeviceConnectionChangeTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(hstring * value) = 0;
};

struct __declspec(uuid("8e44b56d-f902-4a00-b536-f37992e6a2a7")) __declspec(novtable) IDeviceDisconnectButtonClickedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Device(Windows::Devices::Enumeration::IDeviceInformation ** value) = 0;
};

struct __declspec(uuid("aba0fb95-4398-489d-8e44-e6130927011f")) __declspec(novtable) IDeviceInformation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsEnabled(bool * value) = 0;
    virtual HRESULT __stdcall get_IsDefault(bool * value) = 0;
    virtual HRESULT __stdcall get_EnclosureLocation(Windows::Devices::Enumeration::IEnclosureLocation ** value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> ** value) = 0;
    virtual HRESULT __stdcall abi_Update(Windows::Devices::Enumeration::IDeviceInformationUpdate * updateInfo) = 0;
    virtual HRESULT __stdcall abi_GetThumbnailAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceThumbnail> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_GetGlyphThumbnailAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceThumbnail> ** asyncOp) = 0;
};

struct __declspec(uuid("f156a638-7997-48d9-a10c-269d46533f48")) __declspec(novtable) IDeviceInformation2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Kind(winrt::Windows::Devices::Enumeration::DeviceInformationKind * value) = 0;
    virtual HRESULT __stdcall get_Pairing(Windows::Devices::Enumeration::IDeviceInformationPairing ** value) = 0;
};

struct __declspec(uuid("85138c02-4ee6-4914-8370-107a39144c0e")) __declspec(novtable) IDeviceInformationCustomPairing : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_PairAsync(winrt::Windows::Devices::Enumeration::DevicePairingKinds pairingKindsSupported, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> ** result) = 0;
    virtual HRESULT __stdcall abi_PairWithProtectionLevelAsync(winrt::Windows::Devices::Enumeration::DevicePairingKinds pairingKindsSupported, winrt::Windows::Devices::Enumeration::DevicePairingProtectionLevel minProtectionLevel, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> ** result) = 0;
    virtual HRESULT __stdcall abi_PairWithProtectionLevelAndSettingsAsync(winrt::Windows::Devices::Enumeration::DevicePairingKinds pairingKindsSupported, winrt::Windows::Devices::Enumeration::DevicePairingProtectionLevel minProtectionLevel, Windows::Devices::Enumeration::IDevicePairingSettings * devicePairingSettings, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> ** result) = 0;
    virtual HRESULT __stdcall add_PairingRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceInformationCustomPairing, Windows::Devices::Enumeration::DevicePairingRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PairingRequested(event_token token) = 0;
};

struct __declspec(uuid("2c4769f5-f684-40d5-8469-e8dbaab70485")) __declspec(novtable) IDeviceInformationPairing : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsPaired(bool * value) = 0;
    virtual HRESULT __stdcall get_CanPair(bool * value) = 0;
    virtual HRESULT __stdcall abi_PairAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> ** result) = 0;
    virtual HRESULT __stdcall abi_PairWithProtectionLevelAsync(winrt::Windows::Devices::Enumeration::DevicePairingProtectionLevel minProtectionLevel, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> ** result) = 0;
};

struct __declspec(uuid("f68612fd-0aee-4328-85cc-1c742bb1790d")) __declspec(novtable) IDeviceInformationPairing2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ProtectionLevel(winrt::Windows::Devices::Enumeration::DevicePairingProtectionLevel * value) = 0;
    virtual HRESULT __stdcall get_Custom(Windows::Devices::Enumeration::IDeviceInformationCustomPairing ** value) = 0;
    virtual HRESULT __stdcall abi_PairWithProtectionLevelAndSettingsAsync(winrt::Windows::Devices::Enumeration::DevicePairingProtectionLevel minProtectionLevel, Windows::Devices::Enumeration::IDevicePairingSettings * devicePairingSettings, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DevicePairingResult> ** result) = 0;
    virtual HRESULT __stdcall abi_UnpairAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceUnpairingResult> ** result) = 0;
};

struct __declspec(uuid("e915c408-36d4-49a1-bf13-514173799b6b")) __declspec(novtable) IDeviceInformationPairingStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TryRegisterForAllInboundPairingRequests(winrt::Windows::Devices::Enumeration::DevicePairingKinds pairingKindsSupported, bool * result) = 0;
};

struct __declspec(uuid("c17f100e-3a46-4a78-8013-769dc9b97390")) __declspec(novtable) IDeviceInformationStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateFromIdAsync(hstring deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_CreateFromIdAsyncAdditionalProperties(hstring deviceId, Windows::Foundation::Collections::IIterable<hstring> * additionalProperties, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_FindAllAsync(Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_FindAllAsyncDeviceClass(winrt::Windows::Devices::Enumeration::DeviceClass deviceClass, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_FindAllAsyncAqsFilter(hstring aqsFilter, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_FindAllAsyncAqsFilterAndAdditionalProperties(hstring aqsFilter, Windows::Foundation::Collections::IIterable<hstring> * additionalProperties, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_CreateWatcher(Windows::Devices::Enumeration::IDeviceWatcher ** watcher) = 0;
    virtual HRESULT __stdcall abi_CreateWatcherDeviceClass(winrt::Windows::Devices::Enumeration::DeviceClass deviceClass, Windows::Devices::Enumeration::IDeviceWatcher ** watcher) = 0;
    virtual HRESULT __stdcall abi_CreateWatcherAqsFilter(hstring aqsFilter, Windows::Devices::Enumeration::IDeviceWatcher ** watcher) = 0;
    virtual HRESULT __stdcall abi_CreateWatcherAqsFilterAndAdditionalProperties(hstring aqsFilter, Windows::Foundation::Collections::IIterable<hstring> * additionalProperties, Windows::Devices::Enumeration::IDeviceWatcher ** watcher) = 0;
};

struct __declspec(uuid("493b4f34-a84f-45fd-9167-15d1cb1bd1f9")) __declspec(novtable) IDeviceInformationStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetAqsFilterFromDeviceClass(winrt::Windows::Devices::Enumeration::DeviceClass deviceClass, hstring * aqsFilter) = 0;
    virtual HRESULT __stdcall abi_CreateFromIdAsyncWithKindAndAdditionalProperties(hstring deviceId, Windows::Foundation::Collections::IIterable<hstring> * additionalProperties, winrt::Windows::Devices::Enumeration::DeviceInformationKind kind, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_FindAllAsyncWithKindAqsFilterAndAdditionalProperties(hstring aqsFilter, Windows::Foundation::Collections::IIterable<hstring> * additionalProperties, winrt::Windows::Devices::Enumeration::DeviceInformationKind kind, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformationCollection> ** asyncOp) = 0;
    virtual HRESULT __stdcall abi_CreateWatcherWithKindAqsFilterAndAdditionalProperties(hstring aqsFilter, Windows::Foundation::Collections::IIterable<hstring> * additionalProperties, winrt::Windows::Devices::Enumeration::DeviceInformationKind kind, Windows::Devices::Enumeration::IDeviceWatcher ** watcher) = 0;
};

struct __declspec(uuid("8f315305-d972-44b7-a37e-9e822c78213b")) __declspec(novtable) IDeviceInformationUpdate : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> ** value) = 0;
};

struct __declspec(uuid("5d9d148c-a873-485e-baa6-aa620788e3cc")) __declspec(novtable) IDeviceInformationUpdate2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Kind(winrt::Windows::Devices::Enumeration::DeviceInformationKind * value) = 0;
};

struct __declspec(uuid("f717fc56-de6b-487f-8376-0180aca69963")) __declspec(novtable) IDevicePairingRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceInformation(Windows::Devices::Enumeration::IDeviceInformation ** value) = 0;
    virtual HRESULT __stdcall get_PairingKind(winrt::Windows::Devices::Enumeration::DevicePairingKinds * value) = 0;
    virtual HRESULT __stdcall get_Pin(hstring * value) = 0;
    virtual HRESULT __stdcall abi_Accept() = 0;
    virtual HRESULT __stdcall abi_AcceptWithPin(hstring pin) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** result) = 0;
};

struct __declspec(uuid("072b02bf-dd95-4025-9b37-de51adba37b7")) __declspec(novtable) IDevicePairingResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Enumeration::DevicePairingResultStatus * status) = 0;
    virtual HRESULT __stdcall get_ProtectionLevelUsed(winrt::Windows::Devices::Enumeration::DevicePairingProtectionLevel * value) = 0;
};

struct __declspec(uuid("482cb27c-83bb-420e-be51-6602b222de54")) __declspec(novtable) IDevicePairingSettings : Windows::IInspectable
{
};

struct __declspec(uuid("84997aa2-034a-4440-8813-7d0bd479bf5a")) __declspec(novtable) IDevicePicker : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Filter(Windows::Devices::Enumeration::IDevicePickerFilter ** filter) = 0;
    virtual HRESULT __stdcall get_Appearance(Windows::Devices::Enumeration::IDevicePickerAppearance ** value) = 0;
    virtual HRESULT __stdcall get_RequestedProperties(Windows::Foundation::Collections::IVector<hstring> ** value) = 0;
    virtual HRESULT __stdcall add_DeviceSelected(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceSelectedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DeviceSelected(event_token token) = 0;
    virtual HRESULT __stdcall add_DisconnectButtonClicked(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DisconnectButtonClicked(event_token token) = 0;
    virtual HRESULT __stdcall add_DevicePickerDismissed(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DevicePicker, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DevicePickerDismissed(event_token token) = 0;
    virtual HRESULT __stdcall abi_Show(Windows::Foundation::Rect selection) = 0;
    virtual HRESULT __stdcall abi_ShowWithPlacement(Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement placement) = 0;
    virtual HRESULT __stdcall abi_PickSingleDeviceAsync(Windows::Foundation::Rect selection, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> ** operation) = 0;
    virtual HRESULT __stdcall abi_PickSingleDeviceAsyncWithPlacement(Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement placement, Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceInformation> ** operation) = 0;
    virtual HRESULT __stdcall abi_Hide() = 0;
    virtual HRESULT __stdcall abi_SetDisplayStatus(Windows::Devices::Enumeration::IDeviceInformation * device, hstring status, winrt::Windows::Devices::Enumeration::DevicePickerDisplayStatusOptions options) = 0;
};

struct __declspec(uuid("e69a12c6-e627-4ed8-9b6c-460af445e56d")) __declspec(novtable) IDevicePickerAppearance : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Title(hstring * value) = 0;
    virtual HRESULT __stdcall put_Title(hstring value) = 0;
    virtual HRESULT __stdcall get_ForegroundColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_ForegroundColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_BackgroundColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_BackgroundColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_AccentColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_AccentColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_SelectedForegroundColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_SelectedForegroundColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_SelectedBackgroundColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_SelectedBackgroundColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_SelectedAccentColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_SelectedAccentColor(Windows::UI::Color value) = 0;
};

struct __declspec(uuid("91db92a2-57cb-48f1-9b59-a59b7a1f02a2")) __declspec(novtable) IDevicePickerFilter : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SupportedDeviceClasses(Windows::Foundation::Collections::IVector<winrt::Windows::Devices::Enumeration::DeviceClass> ** value) = 0;
    virtual HRESULT __stdcall get_SupportedDeviceSelectors(Windows::Foundation::Collections::IVector<hstring> ** value) = 0;
};

struct __declspec(uuid("269edade-1d2f-4940-8402-4156b81d3c77")) __declspec(novtable) IDeviceSelectedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SelectedDevice(Windows::Devices::Enumeration::IDeviceInformation ** value) = 0;
};

struct __declspec(uuid("66f44ad3-79d9-444b-92cf-a92ef72571c7")) __declspec(novtable) IDeviceUnpairingResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Enumeration::DeviceUnpairingResultStatus * status) = 0;
};

struct __declspec(uuid("c9eab97d-8f6b-4f96-a9f4-abc814e22271")) __declspec(novtable) IDeviceWatcher : Windows::IInspectable
{
    virtual HRESULT __stdcall add_Added(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformation> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Added(event_token token) = 0;
    virtual HRESULT __stdcall add_Updated(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Updated(event_token token) = 0;
    virtual HRESULT __stdcall add_Removed(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::Devices::Enumeration::DeviceInformationUpdate> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Removed(event_token token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Enumeration::DeviceWatcher, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Stopped(event_token token) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::Devices::Enumeration::DeviceWatcherStatus * status) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
};

struct __declspec(uuid("ff08456e-ed14-49e9-9a69-8117c54ae971")) __declspec(novtable) IDeviceWatcher2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetBackgroundTrigger(Windows::Foundation::Collections::IIterable<winrt::Windows::Devices::Enumeration::DeviceWatcherEventKind> * requestedEventKinds, Windows::ApplicationModel::Background::IDeviceWatcherTrigger ** trigger) = 0;
};

struct __declspec(uuid("74aa9c0b-1dbd-47fd-b635-3cc556d0ff8b")) __declspec(novtable) IDeviceWatcherEvent : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Kind(winrt::Windows::Devices::Enumeration::DeviceWatcherEventKind * value) = 0;
    virtual HRESULT __stdcall get_DeviceInformation(Windows::Devices::Enumeration::IDeviceInformation ** value) = 0;
    virtual HRESULT __stdcall get_DeviceInformationUpdate(Windows::Devices::Enumeration::IDeviceInformationUpdate ** value) = 0;
};

struct __declspec(uuid("38808119-4cb7-4e57-a56d-776d07cbfef9")) __declspec(novtable) IDeviceWatcherTriggerDetails : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DeviceWatcherEvents(Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::DeviceWatcherEvent> ** value) = 0;
};

struct __declspec(uuid("42340a27-5810-459c-aabb-c65e1f813ecf")) __declspec(novtable) IEnclosureLocation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InDock(bool * value) = 0;
    virtual HRESULT __stdcall get_InLid(bool * value) = 0;
    virtual HRESULT __stdcall get_Panel(winrt::Windows::Devices::Enumeration::Panel * value) = 0;
};

struct __declspec(uuid("2885995b-e07d-485d-8a9e-bdf29aef4f66")) __declspec(novtable) IEnclosureLocation2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RotationAngleInDegreesClockwise(uint32_t * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Enumeration::DeviceAccessChangedEventArgs> { using default_interface = Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs; };
template <> struct traits<Windows::Devices::Enumeration::DeviceAccessInformation> { using default_interface = Windows::Devices::Enumeration::IDeviceAccessInformation; };
template <> struct traits<Windows::Devices::Enumeration::DeviceConnectionChangeTriggerDetails> { using default_interface = Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails; };
template <> struct traits<Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs> { using default_interface = Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs; };
template <> struct traits<Windows::Devices::Enumeration::DeviceInformation> { using default_interface = Windows::Devices::Enumeration::IDeviceInformation; };
template <> struct traits<Windows::Devices::Enumeration::DeviceInformationCollection> { using default_interface = Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::DeviceInformation>; };
template <> struct traits<Windows::Devices::Enumeration::DeviceInformationCustomPairing> { using default_interface = Windows::Devices::Enumeration::IDeviceInformationCustomPairing; };
template <> struct traits<Windows::Devices::Enumeration::DeviceInformationPairing> { using default_interface = Windows::Devices::Enumeration::IDeviceInformationPairing; };
template <> struct traits<Windows::Devices::Enumeration::DeviceInformationUpdate> { using default_interface = Windows::Devices::Enumeration::IDeviceInformationUpdate; };
template <> struct traits<Windows::Devices::Enumeration::DevicePairingRequestedEventArgs> { using default_interface = Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs; };
template <> struct traits<Windows::Devices::Enumeration::DevicePairingResult> { using default_interface = Windows::Devices::Enumeration::IDevicePairingResult; };
template <> struct traits<Windows::Devices::Enumeration::DevicePicker> { using default_interface = Windows::Devices::Enumeration::IDevicePicker; };
template <> struct traits<Windows::Devices::Enumeration::DevicePickerAppearance> { using default_interface = Windows::Devices::Enumeration::IDevicePickerAppearance; };
template <> struct traits<Windows::Devices::Enumeration::DevicePickerFilter> { using default_interface = Windows::Devices::Enumeration::IDevicePickerFilter; };
template <> struct traits<Windows::Devices::Enumeration::DeviceSelectedEventArgs> { using default_interface = Windows::Devices::Enumeration::IDeviceSelectedEventArgs; };
template <> struct traits<Windows::Devices::Enumeration::DeviceThumbnail> { using default_interface = Windows::Storage::Streams::IRandomAccessStreamWithContentType; };
template <> struct traits<Windows::Devices::Enumeration::DeviceUnpairingResult> { using default_interface = Windows::Devices::Enumeration::IDeviceUnpairingResult; };
template <> struct traits<Windows::Devices::Enumeration::DeviceWatcher> { using default_interface = Windows::Devices::Enumeration::IDeviceWatcher; };
template <> struct traits<Windows::Devices::Enumeration::DeviceWatcherEvent> { using default_interface = Windows::Devices::Enumeration::IDeviceWatcherEvent; };
template <> struct traits<Windows::Devices::Enumeration::DeviceWatcherTriggerDetails> { using default_interface = Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails; };
template <> struct traits<Windows::Devices::Enumeration::EnclosureLocation> { using default_interface = Windows::Devices::Enumeration::IEnclosureLocation; };

}

namespace Windows::Devices::Enumeration {

template <typename T> class impl_IDeviceAccessChangedEventArgs;
template <typename T> class impl_IDeviceAccessChangedEventArgs2;
template <typename T> class impl_IDeviceAccessInformation;
template <typename T> class impl_IDeviceAccessInformationStatics;
template <typename T> class impl_IDeviceConnectionChangeTriggerDetails;
template <typename T> class impl_IDeviceDisconnectButtonClickedEventArgs;
template <typename T> class impl_IDeviceInformation;
template <typename T> class impl_IDeviceInformation2;
template <typename T> class impl_IDeviceInformationCustomPairing;
template <typename T> class impl_IDeviceInformationPairing;
template <typename T> class impl_IDeviceInformationPairing2;
template <typename T> class impl_IDeviceInformationPairingStatics;
template <typename T> class impl_IDeviceInformationStatics;
template <typename T> class impl_IDeviceInformationStatics2;
template <typename T> class impl_IDeviceInformationUpdate;
template <typename T> class impl_IDeviceInformationUpdate2;
template <typename T> class impl_IDevicePairingRequestedEventArgs;
template <typename T> class impl_IDevicePairingResult;
template <typename T> class impl_IDevicePairingSettings;
template <typename T> class impl_IDevicePicker;
template <typename T> class impl_IDevicePickerAppearance;
template <typename T> class impl_IDevicePickerFilter;
template <typename T> class impl_IDeviceSelectedEventArgs;
template <typename T> class impl_IDeviceUnpairingResult;
template <typename T> class impl_IDeviceWatcher;
template <typename T> class impl_IDeviceWatcher2;
template <typename T> class impl_IDeviceWatcherEvent;
template <typename T> class impl_IDeviceWatcherTriggerDetails;
template <typename T> class impl_IEnclosureLocation;
template <typename T> class impl_IEnclosureLocation2;

}

namespace impl {

template <> struct traits<Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceAccessChangedEventArgs<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs2;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceAccessChangedEventArgs2<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceAccessInformation>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceAccessInformation;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceAccessInformation<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceAccessInformationStatics>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceAccessInformationStatics;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceAccessInformationStatics<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceConnectionChangeTriggerDetails<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceDisconnectButtonClickedEventArgs<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceInformation>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceInformation;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceInformation<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceInformation2>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceInformation2;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceInformation2<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceInformationCustomPairing>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceInformationCustomPairing;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceInformationCustomPairing<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceInformationPairing>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceInformationPairing;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceInformationPairing<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceInformationPairing2>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceInformationPairing2;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceInformationPairing2<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceInformationPairingStatics>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceInformationPairingStatics;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceInformationPairingStatics<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceInformationStatics>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceInformationStatics;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceInformationStatics<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceInformationStatics2>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceInformationStatics2;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceInformationStatics2<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceInformationUpdate>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceInformationUpdate;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceInformationUpdate<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceInformationUpdate2>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceInformationUpdate2;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceInformationUpdate2<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs>
{
    using abi = ABI::Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDevicePairingRequestedEventArgs<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDevicePairingResult>
{
    using abi = ABI::Windows::Devices::Enumeration::IDevicePairingResult;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDevicePairingResult<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDevicePairingSettings>
{
    using abi = ABI::Windows::Devices::Enumeration::IDevicePairingSettings;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDevicePairingSettings<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDevicePicker>
{
    using abi = ABI::Windows::Devices::Enumeration::IDevicePicker;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDevicePicker<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDevicePickerAppearance>
{
    using abi = ABI::Windows::Devices::Enumeration::IDevicePickerAppearance;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDevicePickerAppearance<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDevicePickerFilter>
{
    using abi = ABI::Windows::Devices::Enumeration::IDevicePickerFilter;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDevicePickerFilter<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceSelectedEventArgs>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceSelectedEventArgs;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceSelectedEventArgs<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceUnpairingResult>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceUnpairingResult;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceUnpairingResult<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceWatcher>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceWatcher;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceWatcher<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceWatcher2>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceWatcher2;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceWatcher2<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceWatcherEvent>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceWatcherEvent;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceWatcherEvent<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails>
{
    using abi = ABI::Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IDeviceWatcherTriggerDetails<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IEnclosureLocation>
{
    using abi = ABI::Windows::Devices::Enumeration::IEnclosureLocation;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IEnclosureLocation<D>;
};

template <> struct traits<Windows::Devices::Enumeration::IEnclosureLocation2>
{
    using abi = ABI::Windows::Devices::Enumeration::IEnclosureLocation2;
    template <typename D> using consume = Windows::Devices::Enumeration::impl_IEnclosureLocation2<D>;
};

template <> struct traits<Windows::Devices::Enumeration::DeviceAccessChangedEventArgs>
{
    using abi = ABI::Windows::Devices::Enumeration::DeviceAccessChangedEventArgs;
    using default_interface = Windows::Devices::Enumeration::IDeviceAccessChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DeviceAccessChangedEventArgs"; }
};

template <> struct traits<Windows::Devices::Enumeration::DeviceAccessInformation>
{
    using abi = ABI::Windows::Devices::Enumeration::DeviceAccessInformation;
    using default_interface = Windows::Devices::Enumeration::IDeviceAccessInformation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DeviceAccessInformation"; }
};

template <> struct traits<Windows::Devices::Enumeration::DeviceConnectionChangeTriggerDetails>
{
    using abi = ABI::Windows::Devices::Enumeration::DeviceConnectionChangeTriggerDetails;
    using default_interface = Windows::Devices::Enumeration::IDeviceConnectionChangeTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DeviceConnectionChangeTriggerDetails"; }
};

template <> struct traits<Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs>
{
    using abi = ABI::Windows::Devices::Enumeration::DeviceDisconnectButtonClickedEventArgs;
    using default_interface = Windows::Devices::Enumeration::IDeviceDisconnectButtonClickedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DeviceDisconnectButtonClickedEventArgs"; }
};

template <> struct traits<Windows::Devices::Enumeration::DeviceInformation>
{
    using abi = ABI::Windows::Devices::Enumeration::DeviceInformation;
    using default_interface = Windows::Devices::Enumeration::IDeviceInformation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DeviceInformation"; }
};

template <> struct traits<Windows::Devices::Enumeration::DeviceInformationCollection>
{
    using abi = ABI::Windows::Devices::Enumeration::DeviceInformationCollection;
    using default_interface = Windows::Foundation::Collections::IVectorView<Windows::Devices::Enumeration::DeviceInformation>;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DeviceInformationCollection"; }
};

template <> struct traits<Windows::Devices::Enumeration::DeviceInformationCustomPairing>
{
    using abi = ABI::Windows::Devices::Enumeration::DeviceInformationCustomPairing;
    using default_interface = Windows::Devices::Enumeration::IDeviceInformationCustomPairing;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DeviceInformationCustomPairing"; }
};

template <> struct traits<Windows::Devices::Enumeration::DeviceInformationPairing>
{
    using abi = ABI::Windows::Devices::Enumeration::DeviceInformationPairing;
    using default_interface = Windows::Devices::Enumeration::IDeviceInformationPairing;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DeviceInformationPairing"; }
};

template <> struct traits<Windows::Devices::Enumeration::DeviceInformationUpdate>
{
    using abi = ABI::Windows::Devices::Enumeration::DeviceInformationUpdate;
    using default_interface = Windows::Devices::Enumeration::IDeviceInformationUpdate;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DeviceInformationUpdate"; }
};

template <> struct traits<Windows::Devices::Enumeration::DevicePairingRequestedEventArgs>
{
    using abi = ABI::Windows::Devices::Enumeration::DevicePairingRequestedEventArgs;
    using default_interface = Windows::Devices::Enumeration::IDevicePairingRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DevicePairingRequestedEventArgs"; }
};

template <> struct traits<Windows::Devices::Enumeration::DevicePairingResult>
{
    using abi = ABI::Windows::Devices::Enumeration::DevicePairingResult;
    using default_interface = Windows::Devices::Enumeration::IDevicePairingResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DevicePairingResult"; }
};

template <> struct traits<Windows::Devices::Enumeration::DevicePicker>
{
    using abi = ABI::Windows::Devices::Enumeration::DevicePicker;
    using default_interface = Windows::Devices::Enumeration::IDevicePicker;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DevicePicker"; }
};

template <> struct traits<Windows::Devices::Enumeration::DevicePickerAppearance>
{
    using abi = ABI::Windows::Devices::Enumeration::DevicePickerAppearance;
    using default_interface = Windows::Devices::Enumeration::IDevicePickerAppearance;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DevicePickerAppearance"; }
};

template <> struct traits<Windows::Devices::Enumeration::DevicePickerFilter>
{
    using abi = ABI::Windows::Devices::Enumeration::DevicePickerFilter;
    using default_interface = Windows::Devices::Enumeration::IDevicePickerFilter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DevicePickerFilter"; }
};

template <> struct traits<Windows::Devices::Enumeration::DeviceSelectedEventArgs>
{
    using abi = ABI::Windows::Devices::Enumeration::DeviceSelectedEventArgs;
    using default_interface = Windows::Devices::Enumeration::IDeviceSelectedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DeviceSelectedEventArgs"; }
};

template <> struct traits<Windows::Devices::Enumeration::DeviceThumbnail>
{
    using abi = ABI::Windows::Devices::Enumeration::DeviceThumbnail;
    using default_interface = Windows::Storage::Streams::IRandomAccessStreamWithContentType;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DeviceThumbnail"; }
};

template <> struct traits<Windows::Devices::Enumeration::DeviceUnpairingResult>
{
    using abi = ABI::Windows::Devices::Enumeration::DeviceUnpairingResult;
    using default_interface = Windows::Devices::Enumeration::IDeviceUnpairingResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DeviceUnpairingResult"; }
};

template <> struct traits<Windows::Devices::Enumeration::DeviceWatcher>
{
    using abi = ABI::Windows::Devices::Enumeration::DeviceWatcher;
    using default_interface = Windows::Devices::Enumeration::IDeviceWatcher;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DeviceWatcher"; }
};

template <> struct traits<Windows::Devices::Enumeration::DeviceWatcherEvent>
{
    using abi = ABI::Windows::Devices::Enumeration::DeviceWatcherEvent;
    using default_interface = Windows::Devices::Enumeration::IDeviceWatcherEvent;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DeviceWatcherEvent"; }
};

template <> struct traits<Windows::Devices::Enumeration::DeviceWatcherTriggerDetails>
{
    using abi = ABI::Windows::Devices::Enumeration::DeviceWatcherTriggerDetails;
    using default_interface = Windows::Devices::Enumeration::IDeviceWatcherTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.DeviceWatcherTriggerDetails"; }
};

template <> struct traits<Windows::Devices::Enumeration::EnclosureLocation>
{
    using abi = ABI::Windows::Devices::Enumeration::EnclosureLocation;
    using default_interface = Windows::Devices::Enumeration::IEnclosureLocation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Enumeration.EnclosureLocation"; }
};

}

}
