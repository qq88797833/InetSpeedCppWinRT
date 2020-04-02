// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.200316.3

#ifndef WINRT_Windows_Data_Json_0_H
#define WINRT_Windows_Data_Json_0_H
WINRT_EXPORT namespace winrt::Windows::Data::Json
{
    enum class JsonErrorStatus : int32_t
    {
        Unknown = 0,
        InvalidJsonString = 1,
        InvalidJsonNumber = 2,
        JsonValueNotFound = 3,
        ImplementationLimit = 4,
    };
    enum class JsonValueType : int32_t
    {
        Null = 0,
        Boolean = 1,
        Number = 2,
        String = 3,
        Array = 4,
        Object = 5,
    };
    struct IJsonArray;
    struct IJsonArrayStatics;
    struct IJsonErrorStatics2;
    struct IJsonObject;
    struct IJsonObjectStatics;
    struct IJsonObjectWithDefaultValues;
    struct IJsonValue;
    struct IJsonValueStatics;
    struct IJsonValueStatics2;
    struct JsonArray;
    struct JsonError;
    struct JsonObject;
    struct JsonValue;
}
namespace winrt::impl
{
    template <> struct category<Windows::Data::Json::IJsonArray>{ using type = interface_category; };
    template <> struct category<Windows::Data::Json::IJsonArrayStatics>{ using type = interface_category; };
    template <> struct category<Windows::Data::Json::IJsonErrorStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Data::Json::IJsonObject>{ using type = interface_category; };
    template <> struct category<Windows::Data::Json::IJsonObjectStatics>{ using type = interface_category; };
    template <> struct category<Windows::Data::Json::IJsonObjectWithDefaultValues>{ using type = interface_category; };
    template <> struct category<Windows::Data::Json::IJsonValue>{ using type = interface_category; };
    template <> struct category<Windows::Data::Json::IJsonValueStatics>{ using type = interface_category; };
    template <> struct category<Windows::Data::Json::IJsonValueStatics2>{ using type = interface_category; };
    template <> struct category<Windows::Data::Json::JsonArray>{ using type = class_category; };
    template <> struct category<Windows::Data::Json::JsonError>{ using type = class_category; };
    template <> struct category<Windows::Data::Json::JsonObject>{ using type = class_category; };
    template <> struct category<Windows::Data::Json::JsonValue>{ using type = class_category; };
    template <> struct category<Windows::Data::Json::JsonErrorStatus>{ using type = enum_category; };
    template <> struct category<Windows::Data::Json::JsonValueType>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Data::Json::JsonArray> = L"Windows.Data.Json.JsonArray";
    template <> inline constexpr auto& name_v<Windows::Data::Json::JsonError> = L"Windows.Data.Json.JsonError";
    template <> inline constexpr auto& name_v<Windows::Data::Json::JsonObject> = L"Windows.Data.Json.JsonObject";
    template <> inline constexpr auto& name_v<Windows::Data::Json::JsonValue> = L"Windows.Data.Json.JsonValue";
    template <> inline constexpr auto& name_v<Windows::Data::Json::JsonErrorStatus> = L"Windows.Data.Json.JsonErrorStatus";
    template <> inline constexpr auto& name_v<Windows::Data::Json::JsonValueType> = L"Windows.Data.Json.JsonValueType";
    template <> inline constexpr auto& name_v<Windows::Data::Json::IJsonArray> = L"Windows.Data.Json.IJsonArray";
    template <> inline constexpr auto& name_v<Windows::Data::Json::IJsonArrayStatics> = L"Windows.Data.Json.IJsonArrayStatics";
    template <> inline constexpr auto& name_v<Windows::Data::Json::IJsonErrorStatics2> = L"Windows.Data.Json.IJsonErrorStatics2";
    template <> inline constexpr auto& name_v<Windows::Data::Json::IJsonObject> = L"Windows.Data.Json.IJsonObject";
    template <> inline constexpr auto& name_v<Windows::Data::Json::IJsonObjectStatics> = L"Windows.Data.Json.IJsonObjectStatics";
    template <> inline constexpr auto& name_v<Windows::Data::Json::IJsonObjectWithDefaultValues> = L"Windows.Data.Json.IJsonObjectWithDefaultValues";
    template <> inline constexpr auto& name_v<Windows::Data::Json::IJsonValue> = L"Windows.Data.Json.IJsonValue";
    template <> inline constexpr auto& name_v<Windows::Data::Json::IJsonValueStatics> = L"Windows.Data.Json.IJsonValueStatics";
    template <> inline constexpr auto& name_v<Windows::Data::Json::IJsonValueStatics2> = L"Windows.Data.Json.IJsonValueStatics2";
    template <> inline constexpr guid guid_v<Windows::Data::Json::IJsonArray>{ 0x08C1DDB6,0x0CBD,0x4A9A,{ 0xB5,0xD3,0x2F,0x85,0x2D,0xC3,0x7E,0x81 } };
    template <> inline constexpr guid guid_v<Windows::Data::Json::IJsonArrayStatics>{ 0xDB1434A9,0xE164,0x499F,{ 0x93,0xE2,0x8A,0x8F,0x49,0xBB,0x90,0xBA } };
    template <> inline constexpr guid guid_v<Windows::Data::Json::IJsonErrorStatics2>{ 0x404030DA,0x87D0,0x436C,{ 0x83,0xAB,0xFC,0x7B,0x12,0xC0,0xCC,0x26 } };
    template <> inline constexpr guid guid_v<Windows::Data::Json::IJsonObject>{ 0x064E24DD,0x29C2,0x4F83,{ 0x9A,0xC1,0x9E,0xE1,0x15,0x78,0xBE,0xB3 } };
    template <> inline constexpr guid guid_v<Windows::Data::Json::IJsonObjectStatics>{ 0x2289F159,0x54DE,0x45D8,{ 0xAB,0xCC,0x22,0x60,0x3F,0xA0,0x66,0xA0 } };
    template <> inline constexpr guid guid_v<Windows::Data::Json::IJsonObjectWithDefaultValues>{ 0xD960D2A2,0xB7F0,0x4F00,{ 0x8E,0x44,0xD8,0x2C,0xF4,0x15,0xEA,0x13 } };
    template <> inline constexpr guid guid_v<Windows::Data::Json::IJsonValue>{ 0xA3219ECB,0xF0B3,0x4DCD,{ 0xBE,0xEE,0x19,0xD4,0x8C,0xD3,0xED,0x1E } };
    template <> inline constexpr guid guid_v<Windows::Data::Json::IJsonValueStatics>{ 0x5F6B544A,0x2F53,0x48E1,{ 0x91,0xA3,0xF7,0x8B,0x50,0xA6,0x34,0x5C } };
    template <> inline constexpr guid guid_v<Windows::Data::Json::IJsonValueStatics2>{ 0x1D9ECBE4,0x3FE8,0x4335,{ 0x83,0x92,0x93,0xD8,0xE3,0x68,0x65,0xF0 } };
    template <> struct default_interface<Windows::Data::Json::JsonArray>{ using type = Windows::Data::Json::IJsonArray; };
    template <> struct default_interface<Windows::Data::Json::JsonObject>{ using type = Windows::Data::Json::IJsonObject; };
    template <> struct default_interface<Windows::Data::Json::JsonValue>{ using type = Windows::Data::Json::IJsonValue; };
    template <> struct abi<Windows::Data::Json::IJsonArray>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetObjectAt(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetArrayAt(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetStringAt(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetNumberAt(uint32_t, double*) noexcept = 0;
            virtual int32_t __stdcall GetBooleanAt(uint32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Json::IJsonArrayStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Json::IJsonErrorStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetJsonStatus(int32_t, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Json::IJsonObject>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetNamedValue(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetNamedValue(void*, void*) noexcept = 0;
            virtual int32_t __stdcall GetNamedObject(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetNamedArray(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetNamedString(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetNamedNumber(void*, double*) noexcept = 0;
            virtual int32_t __stdcall GetNamedBoolean(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Json::IJsonObjectStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Json::IJsonObjectWithDefaultValues>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetNamedValueOrDefault(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetNamedObjectOrDefault(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetNamedStringOrDefault(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetNamedArrayOrDefault(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetNamedNumberOrDefault(void*, double, double*) noexcept = 0;
            virtual int32_t __stdcall GetNamedBooleanOrDefault(void*, bool, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Json::IJsonValue>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ValueType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Stringify(void**) noexcept = 0;
            virtual int32_t __stdcall GetString(void**) noexcept = 0;
            virtual int32_t __stdcall GetNumber(double*) noexcept = 0;
            virtual int32_t __stdcall GetBoolean(bool*) noexcept = 0;
            virtual int32_t __stdcall GetArray(void**) noexcept = 0;
            virtual int32_t __stdcall GetObject(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Json::IJsonValueStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Parse(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryParse(void*, void**, bool*) noexcept = 0;
            virtual int32_t __stdcall CreateBooleanValue(bool, void**) noexcept = 0;
            virtual int32_t __stdcall CreateNumberValue(double, void**) noexcept = 0;
            virtual int32_t __stdcall CreateStringValue(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Data::Json::IJsonValueStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateNullValue(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Data_Json_IJsonArray
    {
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonObject) GetObjectAt(uint32_t index) const;
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonArray) GetArrayAt(uint32_t index) const;
        WINRT_IMPL_AUTO(hstring) GetStringAt(uint32_t index) const;
        WINRT_IMPL_AUTO(double) GetNumberAt(uint32_t index) const;
        WINRT_IMPL_AUTO(bool) GetBooleanAt(uint32_t index) const;
    };
    template <> struct consume<Windows::Data::Json::IJsonArray>
    {
        template <typename D> using type = consume_Windows_Data_Json_IJsonArray<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Json_IJsonArrayStatics
    {
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonArray) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Data::Json::JsonArray& result) const;
    };
    template <> struct consume<Windows::Data::Json::IJsonArrayStatics>
    {
        template <typename D> using type = consume_Windows_Data_Json_IJsonArrayStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Json_IJsonErrorStatics2
    {
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonErrorStatus) GetJsonStatus(int32_t hresult) const;
    };
    template <> struct consume<Windows::Data::Json::IJsonErrorStatics2>
    {
        template <typename D> using type = consume_Windows_Data_Json_IJsonErrorStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Json_IJsonObject
    {
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonValue) GetNamedValue(param::hstring const& name) const;
        WINRT_IMPL_AUTO(void) SetNamedValue(param::hstring const& name, Windows::Data::Json::IJsonValue const& value) const;
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonObject) GetNamedObject(param::hstring const& name) const;
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonArray) GetNamedArray(param::hstring const& name) const;
        WINRT_IMPL_AUTO(hstring) GetNamedString(param::hstring const& name) const;
        WINRT_IMPL_AUTO(double) GetNamedNumber(param::hstring const& name) const;
        WINRT_IMPL_AUTO(bool) GetNamedBoolean(param::hstring const& name) const;
    };
    template <> struct consume<Windows::Data::Json::IJsonObject>
    {
        template <typename D> using type = consume_Windows_Data_Json_IJsonObject<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Json_IJsonObjectStatics
    {
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonObject) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Data::Json::JsonObject& result) const;
    };
    template <> struct consume<Windows::Data::Json::IJsonObjectStatics>
    {
        template <typename D> using type = consume_Windows_Data_Json_IJsonObjectStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Json_IJsonObjectWithDefaultValues
    {
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonValue) GetNamedValue(param::hstring const& name, Windows::Data::Json::JsonValue const& defaultValue) const;
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonObject) GetNamedObject(param::hstring const& name, Windows::Data::Json::JsonObject const& defaultValue) const;
        WINRT_IMPL_AUTO(hstring) GetNamedString(param::hstring const& name, param::hstring const& defaultValue) const;
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonArray) GetNamedArray(param::hstring const& name, Windows::Data::Json::JsonArray const& defaultValue) const;
        WINRT_IMPL_AUTO(double) GetNamedNumber(param::hstring const& name, double defaultValue) const;
        WINRT_IMPL_AUTO(bool) GetNamedBoolean(param::hstring const& name, bool defaultValue) const;
    };
    template <> struct consume<Windows::Data::Json::IJsonObjectWithDefaultValues>
    {
        template <typename D> using type = consume_Windows_Data_Json_IJsonObjectWithDefaultValues<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Json_IJsonValue
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Data::Json::JsonValueType) ValueType() const;
        WINRT_IMPL_AUTO(hstring) Stringify() const;
        WINRT_IMPL_AUTO(hstring) GetString() const;
        WINRT_IMPL_AUTO(double) GetNumber() const;
        WINRT_IMPL_AUTO(bool) GetBoolean() const;
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonArray) GetArray() const;
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonObject) GetObject() const;
    };
    template <> struct consume<Windows::Data::Json::IJsonValue>
    {
        template <typename D> using type = consume_Windows_Data_Json_IJsonValue<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Json_IJsonValueStatics
    {
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonValue) Parse(param::hstring const& input) const;
        WINRT_IMPL_AUTO(bool) TryParse(param::hstring const& input, Windows::Data::Json::JsonValue& result) const;
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonValue) CreateBooleanValue(bool input) const;
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonValue) CreateNumberValue(double input) const;
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonValue) CreateStringValue(param::hstring const& input) const;
    };
    template <> struct consume<Windows::Data::Json::IJsonValueStatics>
    {
        template <typename D> using type = consume_Windows_Data_Json_IJsonValueStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Data_Json_IJsonValueStatics2
    {
        WINRT_IMPL_AUTO(Windows::Data::Json::JsonValue) CreateNullValue() const;
    };
    template <> struct consume<Windows::Data::Json::IJsonValueStatics2>
    {
        template <typename D> using type = consume_Windows_Data_Json_IJsonValueStatics2<D>;
    };
}
#endif
