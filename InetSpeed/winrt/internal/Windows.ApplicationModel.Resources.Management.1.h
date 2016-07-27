// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "base.h"
#include "Windows.ApplicationModel.Resources.Management.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Resources::Management {

struct __declspec(uuid("0e619ef3-faec-4414-a9d7-54acd5953f29")) __declspec(novtable) IIndexedResourceCandidate : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Type(winrt::Windows::ApplicationModel::Resources::Management::IndexedResourceType * value) = 0;
    virtual HRESULT __stdcall get_Uri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_Metadata(Windows::Foundation::Collections::IMapView<hstring, hstring> ** value) = 0;
    virtual HRESULT __stdcall get_Qualifiers(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier> ** value) = 0;
    virtual HRESULT __stdcall get_ValueAsString(hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetQualifierValue(hstring qualifierName, hstring * qualifierValue) = 0;
};

struct __declspec(uuid("dae3bb9b-d304-497f-a168-a340042c8adb")) __declspec(novtable) IIndexedResourceQualifier : Windows::IInspectable
{
    virtual HRESULT __stdcall get_QualifierName(hstring * value) = 0;
    virtual HRESULT __stdcall get_QualifierValue(hstring * value) = 0;
};

struct __declspec(uuid("2d4cf9a5-e32f-4ab2-8748-96350a016da3")) __declspec(novtable) IResourceIndexer : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_IndexFilePath(Windows::Foundation::IUriRuntimeClass * filePath, Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate ** candidate) = 0;
    virtual HRESULT __stdcall abi_IndexFileContentsAsync(Windows::Foundation::IUriRuntimeClass * file, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate>> ** operation) = 0;
};

struct __declspec(uuid("b8de3f09-31cd-4d97-bd30-8d39f742bc61")) __declspec(novtable) IResourceIndexerFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateResourceIndexer(Windows::Foundation::IUriRuntimeClass * projectRoot, Windows::ApplicationModel::Resources::Management::IResourceIndexer ** indexer) = 0;
};

struct __declspec(uuid("6040f18d-d5e5-4b60-9201-cd279cbcfed9")) __declspec(novtable) IResourceIndexerFactory2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateResourceIndexerWithExtension(Windows::Foundation::IUriRuntimeClass * projectRoot, Windows::Foundation::IUriRuntimeClass * extensionDllPath, Windows::ApplicationModel::Resources::Management::IResourceIndexer ** indexer) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate> { using default_interface = Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate; };
template <> struct traits<Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier> { using default_interface = Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier; };
template <> struct traits<Windows::ApplicationModel::Resources::Management::ResourceIndexer> { using default_interface = Windows::ApplicationModel::Resources::Management::IResourceIndexer; };

}

namespace Windows::ApplicationModel::Resources::Management {

template <typename T> class impl_IIndexedResourceCandidate;
template <typename T> class impl_IIndexedResourceQualifier;
template <typename T> class impl_IResourceIndexer;
template <typename T> class impl_IResourceIndexerFactory;
template <typename T> class impl_IResourceIndexerFactory2;

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Management::impl_IIndexedResourceCandidate<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Management::impl_IIndexedResourceQualifier<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Management::IResourceIndexer>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Management::IResourceIndexer;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Management::impl_IResourceIndexer<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Management::impl_IResourceIndexerFactory<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Management::IResourceIndexerFactory2;
    template <typename D> using consume = Windows::ApplicationModel::Resources::Management::impl_IResourceIndexerFactory2<D>;
};

template <> struct traits<Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceCandidate;
    using default_interface = Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Management.IndexedResourceCandidate"; }
};

template <> struct traits<Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Management::IndexedResourceQualifier;
    using default_interface = Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Management.IndexedResourceQualifier"; }
};

template <> struct traits<Windows::ApplicationModel::Resources::Management::ResourceIndexer>
{
    using abi = ABI::Windows::ApplicationModel::Resources::Management::ResourceIndexer;
    using default_interface = Windows::ApplicationModel::Resources::Management::IResourceIndexer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Resources.Management.ResourceIndexer"; }
};

}

}
