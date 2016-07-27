// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "base.h"
#include "Windows.UI.Xaml.Shapes.0.h"
#include "Windows.UI.Composition.0.h"
#include "Windows.UI.Xaml.0.h"
#include "Windows.UI.Xaml.Media.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Xaml::Shapes {

struct __declspec(uuid("70e05ac4-d38d-4bab-831f-4a22ef52ac86")) __declspec(novtable) IEllipse : Windows::IInspectable
{
};

struct __declspec(uuid("46a5433d-4ffb-48df-8732-4e15c834816b")) __declspec(novtable) ILine : Windows::IInspectable
{
    virtual HRESULT __stdcall get_X1(double * value) = 0;
    virtual HRESULT __stdcall put_X1(double value) = 0;
    virtual HRESULT __stdcall get_Y1(double * value) = 0;
    virtual HRESULT __stdcall put_Y1(double value) = 0;
    virtual HRESULT __stdcall get_X2(double * value) = 0;
    virtual HRESULT __stdcall put_X2(double value) = 0;
    virtual HRESULT __stdcall get_Y2(double * value) = 0;
    virtual HRESULT __stdcall put_Y2(double value) = 0;
};

struct __declspec(uuid("267c123d-6ea4-4c50-8b1d-50207aff1e8a")) __declspec(novtable) ILineStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_X1Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_Y1Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_X2Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_Y2Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("78883609-3d57-4f3c-b8a5-6cabcac9711f")) __declspec(novtable) IPath : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Data(Windows::UI::Xaml::Media::IGeometry ** value) = 0;
    virtual HRESULT __stdcall put_Data(Windows::UI::Xaml::Media::IGeometry * value) = 0;
};

struct __declspec(uuid("2340a4e3-5a86-4fc6-9a50-cbb93b828766")) __declspec(novtable) IPathFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Shapes::IPath ** instance) = 0;
};

struct __declspec(uuid("f627e59d-87dc-4142-81f1-97fc7ff8641c")) __declspec(novtable) IPathStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DataProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("e3755c19-2e4d-4bcc-8d34-86871957fa01")) __declspec(novtable) IPolygon : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FillRule(winrt::Windows::UI::Xaml::Media::FillRule * value) = 0;
    virtual HRESULT __stdcall put_FillRule(winrt::Windows::UI::Xaml::Media::FillRule value) = 0;
    virtual HRESULT __stdcall get_Points(Windows::Foundation::Collections::IVector<Windows::Foundation::Point> ** value) = 0;
    virtual HRESULT __stdcall put_Points(Windows::Foundation::Collections::IVector<Windows::Foundation::Point> * value) = 0;
};

struct __declspec(uuid("362a8aab-d463-4366-9e1a-beba72810fb7")) __declspec(novtable) IPolygonStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FillRuleProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_PointsProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("91dc62f8-42b3-47f3-8476-c55124a7c4c6")) __declspec(novtable) IPolyline : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FillRule(winrt::Windows::UI::Xaml::Media::FillRule * value) = 0;
    virtual HRESULT __stdcall put_FillRule(winrt::Windows::UI::Xaml::Media::FillRule value) = 0;
    virtual HRESULT __stdcall get_Points(Windows::Foundation::Collections::IVector<Windows::Foundation::Point> ** value) = 0;
    virtual HRESULT __stdcall put_Points(Windows::Foundation::Collections::IVector<Windows::Foundation::Point> * value) = 0;
};

struct __declspec(uuid("c7aa2cd1-a26c-43b0-aaa5-822fa64a11b9")) __declspec(novtable) IPolylineStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FillRuleProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_PointsProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("855bc230-8a11-4e18-a136-4bc21c7827b0")) __declspec(novtable) IRectangle : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RadiusX(double * value) = 0;
    virtual HRESULT __stdcall put_RadiusX(double value) = 0;
    virtual HRESULT __stdcall get_RadiusY(double * value) = 0;
    virtual HRESULT __stdcall put_RadiusY(double value) = 0;
};

struct __declspec(uuid("9f25aa53-bb3a-4c3c-89db-6fbc0d1fa0cc")) __declspec(novtable) IRectangleStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RadiusXProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_RadiusYProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("786f2b75-9aa0-454d-ae06-a2466e37c832")) __declspec(novtable) IShape : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Fill(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_Fill(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_Stroke(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_Stroke(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_StrokeMiterLimit(double * value) = 0;
    virtual HRESULT __stdcall put_StrokeMiterLimit(double value) = 0;
    virtual HRESULT __stdcall get_StrokeThickness(double * value) = 0;
    virtual HRESULT __stdcall put_StrokeThickness(double value) = 0;
    virtual HRESULT __stdcall get_StrokeStartLineCap(winrt::Windows::UI::Xaml::Media::PenLineCap * value) = 0;
    virtual HRESULT __stdcall put_StrokeStartLineCap(winrt::Windows::UI::Xaml::Media::PenLineCap value) = 0;
    virtual HRESULT __stdcall get_StrokeEndLineCap(winrt::Windows::UI::Xaml::Media::PenLineCap * value) = 0;
    virtual HRESULT __stdcall put_StrokeEndLineCap(winrt::Windows::UI::Xaml::Media::PenLineCap value) = 0;
    virtual HRESULT __stdcall get_StrokeLineJoin(winrt::Windows::UI::Xaml::Media::PenLineJoin * value) = 0;
    virtual HRESULT __stdcall put_StrokeLineJoin(winrt::Windows::UI::Xaml::Media::PenLineJoin value) = 0;
    virtual HRESULT __stdcall get_StrokeDashOffset(double * value) = 0;
    virtual HRESULT __stdcall put_StrokeDashOffset(double value) = 0;
    virtual HRESULT __stdcall get_StrokeDashCap(winrt::Windows::UI::Xaml::Media::PenLineCap * value) = 0;
    virtual HRESULT __stdcall put_StrokeDashCap(winrt::Windows::UI::Xaml::Media::PenLineCap value) = 0;
    virtual HRESULT __stdcall get_StrokeDashArray(Windows::Foundation::Collections::IVector<double> ** value) = 0;
    virtual HRESULT __stdcall put_StrokeDashArray(Windows::Foundation::Collections::IVector<double> * value) = 0;
    virtual HRESULT __stdcall get_Stretch(winrt::Windows::UI::Xaml::Media::Stretch * value) = 0;
    virtual HRESULT __stdcall put_Stretch(winrt::Windows::UI::Xaml::Media::Stretch value) = 0;
    virtual HRESULT __stdcall get_GeometryTransform(Windows::UI::Xaml::Media::ITransform ** value) = 0;
};

struct __declspec(uuid("97248dba-49f2-49a4-a5dd-164df824db14")) __declspec(novtable) IShape2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetAlphaMask(Windows::UI::Composition::ICompositionBrush ** returnValue) = 0;
};

struct __declspec(uuid("4b717613-f6aa-48d5-9588-e1d188eacbc9")) __declspec(novtable) IShapeFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Shapes::IShape ** instance) = 0;
};

struct __declspec(uuid("1d7b4c55-9df3-48dc-9194-9d306faa6089")) __declspec(novtable) IShapeStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FillProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_StrokeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_StrokeMiterLimitProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_StrokeThicknessProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_StrokeStartLineCapProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_StrokeEndLineCapProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_StrokeLineJoinProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_StrokeDashOffsetProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_StrokeDashCapProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_StrokeDashArrayProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_StretchProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::Xaml::Shapes::Ellipse> { using default_interface = Windows::UI::Xaml::Shapes::IEllipse; };
template <> struct traits<Windows::UI::Xaml::Shapes::Line> { using default_interface = Windows::UI::Xaml::Shapes::ILine; };
template <> struct traits<Windows::UI::Xaml::Shapes::Path> { using default_interface = Windows::UI::Xaml::Shapes::IPath; };
template <> struct traits<Windows::UI::Xaml::Shapes::Polygon> { using default_interface = Windows::UI::Xaml::Shapes::IPolygon; };
template <> struct traits<Windows::UI::Xaml::Shapes::Polyline> { using default_interface = Windows::UI::Xaml::Shapes::IPolyline; };
template <> struct traits<Windows::UI::Xaml::Shapes::Rectangle> { using default_interface = Windows::UI::Xaml::Shapes::IRectangle; };
template <> struct traits<Windows::UI::Xaml::Shapes::Shape> { using default_interface = Windows::UI::Xaml::Shapes::IShape; };

}

namespace Windows::UI::Xaml::Shapes {

template <typename T> class impl_IEllipse;
template <typename T> class impl_ILine;
template <typename T> class impl_ILineStatics;
template <typename T> class impl_IPath;
template <typename T> class impl_IPathFactory;
template <typename T> class impl_IPathStatics;
template <typename T> class impl_IPolygon;
template <typename T> class impl_IPolygonStatics;
template <typename T> class impl_IPolyline;
template <typename T> class impl_IPolylineStatics;
template <typename T> class impl_IRectangle;
template <typename T> class impl_IRectangleStatics;
template <typename T> class impl_IShape;
template <typename T> class impl_IShape2;
template <typename T> class impl_IShapeFactory;
template <typename T> class impl_IShapeStatics;

}

namespace impl {

template <> struct traits<Windows::UI::Xaml::Shapes::IEllipse>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::IEllipse;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_IEllipse<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::ILine>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::ILine;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_ILine<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::ILineStatics>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::ILineStatics;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_ILineStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::IPath>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::IPath;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_IPath<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::IPathFactory>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::IPathFactory;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_IPathFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::IPathStatics>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::IPathStatics;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_IPathStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::IPolygon>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::IPolygon;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_IPolygon<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::IPolygonStatics>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::IPolygonStatics;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_IPolygonStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::IPolyline>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::IPolyline;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_IPolyline<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::IPolylineStatics>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::IPolylineStatics;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_IPolylineStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::IRectangle>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::IRectangle;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_IRectangle<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::IRectangleStatics>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::IRectangleStatics;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_IRectangleStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::IShape>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::IShape;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_IShape<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::IShape2>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::IShape2;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_IShape2<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::IShapeFactory>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::IShapeFactory;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_IShapeFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::IShapeStatics>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::IShapeStatics;
    template <typename D> using consume = Windows::UI::Xaml::Shapes::impl_IShapeStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Shapes::Ellipse>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::Ellipse;
    using default_interface = Windows::UI::Xaml::Shapes::IEllipse;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Shapes.Ellipse"; }
};

template <> struct traits<Windows::UI::Xaml::Shapes::Line>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::Line;
    using default_interface = Windows::UI::Xaml::Shapes::ILine;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Shapes.Line"; }
};

template <> struct traits<Windows::UI::Xaml::Shapes::Path>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::Path;
    using default_interface = Windows::UI::Xaml::Shapes::IPath;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Shapes.Path"; }
};

template <> struct traits<Windows::UI::Xaml::Shapes::Polygon>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::Polygon;
    using default_interface = Windows::UI::Xaml::Shapes::IPolygon;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Shapes.Polygon"; }
};

template <> struct traits<Windows::UI::Xaml::Shapes::Polyline>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::Polyline;
    using default_interface = Windows::UI::Xaml::Shapes::IPolyline;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Shapes.Polyline"; }
};

template <> struct traits<Windows::UI::Xaml::Shapes::Rectangle>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::Rectangle;
    using default_interface = Windows::UI::Xaml::Shapes::IRectangle;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Shapes.Rectangle"; }
};

template <> struct traits<Windows::UI::Xaml::Shapes::Shape>
{
    using abi = ABI::Windows::UI::Xaml::Shapes::Shape;
    using default_interface = Windows::UI::Xaml::Shapes::IShape;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Shapes.Shape"; }
};

}

}
