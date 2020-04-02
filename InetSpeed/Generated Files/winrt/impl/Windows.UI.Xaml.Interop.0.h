// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.200316.3

#ifndef WINRT_Windows_UI_Xaml_Interop_0_H
#define WINRT_Windows_UI_Xaml_Interop_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Interop
{
    enum class NotifyCollectionChangedAction : int32_t
    {
        Add = 0,
        Remove = 1,
        Replace = 2,
        Move = 3,
        Reset = 4,
    };
    enum class TypeKind : int32_t
    {
        Primitive = 0,
        Metadata = 1,
        Custom = 2,
    };
    struct IBindableIterable;
    struct IBindableIterator;
    struct IBindableObservableVector;
    struct IBindableVector;
    struct IBindableVectorView;
    struct INotifyCollectionChanged;
    struct INotifyCollectionChangedEventArgs;
    struct INotifyCollectionChangedEventArgsFactory;
    struct NotifyCollectionChangedEventArgs;
    struct TypeName;
    struct BindableVectorChangedEventHandler;
    struct NotifyCollectionChangedEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Interop::IBindableIterable>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Interop::IBindableIterator>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Interop::IBindableObservableVector>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Interop::IBindableVector>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Interop::IBindableVectorView>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Interop::INotifyCollectionChanged>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Interop::NotifyCollectionChangedAction>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Interop::TypeKind>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Interop::TypeName>{ using type = struct_category<hstring, Windows::UI::Xaml::Interop::TypeKind>; };
    template <> struct category<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs> = L"Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Interop::NotifyCollectionChangedAction> = L"Windows.UI.Xaml.Interop.NotifyCollectionChangedAction";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Interop::TypeKind> = L"Windows.UI.Xaml.Interop.TypeKind";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Interop::TypeName> = L"Windows.UI.Xaml.Interop.TypeName";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Interop::IBindableIterable> = L"Windows.UI.Xaml.Interop.IBindableIterable";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Interop::IBindableIterator> = L"Windows.UI.Xaml.Interop.IBindableIterator";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Interop::IBindableObservableVector> = L"Windows.UI.Xaml.Interop.IBindableObservableVector";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Interop::IBindableVector> = L"Windows.UI.Xaml.Interop.IBindableVector";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Interop::IBindableVectorView> = L"Windows.UI.Xaml.Interop.IBindableVectorView";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Interop::INotifyCollectionChanged> = L"Windows.UI.Xaml.Interop.INotifyCollectionChanged";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs> = L"Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory> = L"Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler> = L"Windows.UI.Xaml.Interop.BindableVectorChangedEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler> = L"Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler";
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Interop::IBindableIterable>{ 0x036D2C08,0xDF29,0x41AF,{ 0x8A,0xA2,0xD7,0x74,0xBE,0x62,0xBA,0x6F } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Interop::IBindableIterator>{ 0x6A1D6C07,0x076D,0x49F2,{ 0x83,0x14,0xF5,0x2C,0x9C,0x9A,0x83,0x31 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Interop::IBindableObservableVector>{ 0xFE1EB536,0x7E7F,0x4F90,{ 0xAC,0x9A,0x47,0x49,0x84,0xAA,0xE5,0x12 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Interop::IBindableVector>{ 0x393DE7DE,0x6FD0,0x4C0D,{ 0xBB,0x71,0x47,0x24,0x4A,0x11,0x3E,0x93 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Interop::IBindableVectorView>{ 0x346DD6E7,0x976E,0x4BC3,{ 0x81,0x5D,0xEC,0xE2,0x43,0xBC,0x0F,0x33 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Interop::INotifyCollectionChanged>{ 0x28B167D5,0x1A31,0x465B,{ 0x9B,0x25,0xD5,0xC3,0xAE,0x68,0x6C,0x40 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>{ 0x4CF68D33,0xE3F2,0x4964,{ 0xB8,0x5E,0x94,0x5B,0x4F,0x7E,0x2F,0x21 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>{ 0xB30C3E3A,0xDF8D,0x44A5,{ 0x9A,0x38,0x7A,0xC0,0xD0,0x8C,0xE6,0x3D } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler>{ 0x624CD4E1,0xD007,0x43B1,{ 0x9C,0x03,0xAF,0x4D,0x3E,0x62,0x58,0xC4 } };
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler>{ 0xCA10B37C,0xF382,0x4591,{ 0x85,0x57,0x5E,0x24,0x96,0x52,0x79,0xB0 } };
    template <> struct default_interface<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs>{ using type = Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs; };
    template <> struct abi<Windows::UI::Xaml::Interop::IBindableIterable>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall First(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Interop::IBindableIterator>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasCurrent(bool*) noexcept = 0;
            virtual int32_t __stdcall MoveNext(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Interop::IBindableObservableVector>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_VectorChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VectorChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Interop::IBindableVector>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAt(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_Size(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall GetView(void**) noexcept = 0;
            virtual int32_t __stdcall IndexOf(void*, uint32_t*, bool*) noexcept = 0;
            virtual int32_t __stdcall SetAt(uint32_t, void*) noexcept = 0;
            virtual int32_t __stdcall InsertAt(uint32_t, void*) noexcept = 0;
            virtual int32_t __stdcall RemoveAt(uint32_t) noexcept = 0;
            virtual int32_t __stdcall Append(void*) noexcept = 0;
            virtual int32_t __stdcall RemoveAtEnd() noexcept = 0;
            virtual int32_t __stdcall Clear() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Interop::IBindableVectorView>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAt(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_Size(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall IndexOf(void*, uint32_t*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Interop::INotifyCollectionChanged>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_CollectionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_CollectionChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Action(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_NewItems(void**) noexcept = 0;
            virtual int32_t __stdcall get_OldItems(void**) noexcept = 0;
            virtual int32_t __stdcall get_NewStartingIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_OldStartingIndex(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithAllParameters(int32_t, void*, void*, int32_t, int32_t, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Interop_IBindableIterable
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::IBindableIterator) First() const;
    };
    template <> struct consume<Windows::UI::Xaml::Interop::IBindableIterable>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Interop_IBindableIterable<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Interop_IBindableIterator
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) Current() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasCurrent() const;
        WINRT_IMPL_AUTO(bool) MoveNext() const;

        auto& operator++()
        {
            if (!MoveNext())
            {
                static_cast<D&>(*this) = nullptr;
            }

            return *this;
        }

        auto operator*() const
        {
            return Current();
        }
    };
    template <> struct consume<Windows::UI::Xaml::Interop::IBindableIterator>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Interop_IBindableIterator<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Interop_IBindableObservableVector
    {
        WINRT_IMPL_AUTO(winrt::event_token) VectorChanged(Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler const& handler) const;
        using VectorChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Interop::IBindableObservableVector, &impl::abi_t<Windows::UI::Xaml::Interop::IBindableObservableVector>::remove_VectorChanged>;
        [[nodiscard]] VectorChanged_revoker VectorChanged(auto_revoke_t, Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) VectorChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Interop::IBindableObservableVector>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Interop_IBindableObservableVector<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Interop_IBindableVector
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetAt(uint32_t index) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Size() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::IBindableVectorView) GetView() const;
        WINRT_IMPL_AUTO(bool) IndexOf(Windows::Foundation::IInspectable const& value, uint32_t& index) const;
        WINRT_IMPL_AUTO(void) SetAt(uint32_t index, Windows::Foundation::IInspectable const& value) const;
        WINRT_IMPL_AUTO(void) InsertAt(uint32_t index, Windows::Foundation::IInspectable const& value) const;
        WINRT_IMPL_AUTO(void) RemoveAt(uint32_t index) const;
        WINRT_IMPL_AUTO(void) Append(Windows::Foundation::IInspectable const& value) const;
        WINRT_IMPL_AUTO(void) RemoveAtEnd() const;
        WINRT_IMPL_AUTO(void) Clear() const;
    };
    template <> struct consume<Windows::UI::Xaml::Interop::IBindableVector>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Interop_IBindableVector<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Interop_IBindableVectorView
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) GetAt(uint32_t index) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Size() const;
        WINRT_IMPL_AUTO(bool) IndexOf(Windows::Foundation::IInspectable const& value, uint32_t& index) const;
    };
    template <> struct consume<Windows::UI::Xaml::Interop::IBindableVectorView>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Interop_IBindableVectorView<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Interop_INotifyCollectionChanged
    {
        WINRT_IMPL_AUTO(winrt::event_token) CollectionChanged(Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler const& handler) const;
        using CollectionChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Interop::INotifyCollectionChanged, &impl::abi_t<Windows::UI::Xaml::Interop::INotifyCollectionChanged>::remove_CollectionChanged>;
        [[nodiscard]] CollectionChanged_revoker CollectionChanged(auto_revoke_t, Windows::UI::Xaml::Interop::NotifyCollectionChangedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) CollectionChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Interop::INotifyCollectionChanged>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Interop_INotifyCollectionChanged<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::NotifyCollectionChangedAction) Action() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::IBindableVector) NewItems() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::IBindableVector) OldItems() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) NewStartingIndex() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) OldStartingIndex() const;
    };
    template <> struct consume<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgsFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Interop::NotifyCollectionChangedEventArgs) CreateInstanceWithAllParameters(Windows::UI::Xaml::Interop::NotifyCollectionChangedAction const& action, Windows::UI::Xaml::Interop::IBindableVector const& newItems, Windows::UI::Xaml::Interop::IBindableVector const& oldItems, int32_t newIndex, int32_t oldIndex, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgsFactory<D>;
    };
    struct struct_Windows_UI_Xaml_Interop_TypeName
    {
        void* Name;
        int32_t Kind;
    };
    template <> struct abi<Windows::UI::Xaml::Interop::TypeName>
    {
        using type = struct_Windows_UI_Xaml_Interop_TypeName;
    };
}
#endif
