// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.200316.3

#ifndef WINRT_Windows_UI_WindowManagement_Preview_2_H
#define WINRT_Windows_UI_WindowManagement_Preview_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.WindowManagement.1.h"
#include "winrt/impl/Windows.UI.WindowManagement.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::WindowManagement::Preview
{
    struct __declspec(empty_bases) WindowManagementPreview : Windows::UI::WindowManagement::Preview::IWindowManagementPreview
    {
        WindowManagementPreview(std::nullptr_t) noexcept {}
        WindowManagementPreview(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::WindowManagement::Preview::IWindowManagementPreview(ptr, take_ownership_from_abi) {}
        static auto SetPreferredMinSize(Windows::UI::WindowManagement::AppWindow const& window, Windows::Foundation::Size const& preferredFrameMinSize);
    };
}
#endif
