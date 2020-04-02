// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.200316.3

#ifndef WINRT_Windows_Embedded_DeviceLockdown_H
#define WINRT_Windows_Embedded_DeviceLockdown_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.200316.3"), "Mismatched C++/WinRT headers.");
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Embedded.DeviceLockdown.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileInformation<D>::Name() const
    {
        void* phProfileName{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation)->get_Name(&phProfileName));
        return hstring{ phProfileName, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<winrt::guid>) consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileStatics<D>::GetSupportedLockdownProfiles() const
    {
        void* ppProfileIDs{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics)->GetSupportedLockdownProfiles(&ppProfileIDs));
        return Windows::Foundation::Collections::IVectorView<winrt::guid>{ ppProfileIDs, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileStatics<D>::GetCurrentLockdownProfile() const
    {
        winrt::guid pProfileID{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics)->GetCurrentLockdownProfile(put_abi(pProfileID)));
        return pProfileID;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileStatics<D>::ApplyLockdownProfileAsync(winrt::guid const& profileID) const
    {
        void* ppWaitableOperation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics)->ApplyLockdownProfileAsync(impl::bind_in(profileID), &ppWaitableOperation));
        return Windows::Foundation::IAsyncAction{ ppWaitableOperation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation) consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileStatics<D>::GetLockdownProfileInformation(winrt::guid const& profileID) const
    {
        void* ppInformation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics)->GetLockdownProfileInformation(impl::bind_in(profileID), &ppInformation));
        return Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation{ ppInformation, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation> : produce_base<D, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>
    {
        int32_t __stdcall get_Name(void** phProfileName) noexcept final try
        {
            clear_abi(phProfileName);
            typename D::abi_guard guard(this->shim());
            *phProfileName = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics> : produce_base<D, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>
    {
        int32_t __stdcall GetSupportedLockdownProfiles(void** ppProfileIDs) noexcept final try
        {
            clear_abi(ppProfileIDs);
            typename D::abi_guard guard(this->shim());
            *ppProfileIDs = detach_from<Windows::Foundation::Collections::IVectorView<winrt::guid>>(this->shim().GetSupportedLockdownProfiles());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentLockdownProfile(winrt::guid* pProfileID) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *pProfileID = detach_from<winrt::guid>(this->shim().GetCurrentLockdownProfile());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ApplyLockdownProfileAsync(winrt::guid profileID, void** ppWaitableOperation) noexcept final try
        {
            clear_abi(ppWaitableOperation);
            typename D::abi_guard guard(this->shim());
            *ppWaitableOperation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().ApplyLockdownProfileAsync(*reinterpret_cast<winrt::guid const*>(&profileID)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetLockdownProfileInformation(winrt::guid profileID, void** ppInformation) noexcept final try
        {
            clear_abi(ppInformation);
            typename D::abi_guard guard(this->shim());
            *ppInformation = detach_from<Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>(this->shim().GetLockdownProfileInformation(*reinterpret_cast<winrt::guid const*>(&profileID)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Embedded::DeviceLockdown
{
    inline auto DeviceLockdownProfile::GetSupportedLockdownProfiles()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IVectorView<winrt::guid>(*)(IDeviceLockdownProfileStatics const&), DeviceLockdownProfile, IDeviceLockdownProfileStatics>([](IDeviceLockdownProfileStatics const& f) { return f.GetSupportedLockdownProfiles(); });
    }
    inline auto DeviceLockdownProfile::GetCurrentLockdownProfile()
    {
        return impl::call_factory_cast<winrt::guid(*)(IDeviceLockdownProfileStatics const&), DeviceLockdownProfile, IDeviceLockdownProfileStatics>([](IDeviceLockdownProfileStatics const& f) { return f.GetCurrentLockdownProfile(); });
    }
    inline auto DeviceLockdownProfile::ApplyLockdownProfileAsync(winrt::guid const& profileID)
    {
        return impl::call_factory<DeviceLockdownProfile, IDeviceLockdownProfileStatics>([&](IDeviceLockdownProfileStatics const& f) { return f.ApplyLockdownProfileAsync(profileID); });
    }
    inline auto DeviceLockdownProfile::GetLockdownProfileInformation(winrt::guid const& profileID)
    {
        return impl::call_factory<DeviceLockdownProfile, IDeviceLockdownProfileStatics>([&](IDeviceLockdownProfileStatics const& f) { return f.GetLockdownProfileInformation(profileID); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation> : winrt::impl::hash_base {};
#endif
}
#endif
