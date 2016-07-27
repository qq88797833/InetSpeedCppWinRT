// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Storage::Compression {

struct ICompressor;
struct ICompressorFactory;
struct IDecompressor;
struct IDecompressorFactory;
struct Compressor;
struct Decompressor;

}

namespace Windows::Storage::Compression {

struct ICompressor;
struct ICompressorFactory;
struct IDecompressor;
struct IDecompressorFactory;
struct Compressor;
struct Decompressor;

}

namespace Windows::Storage::Compression {

enum class CompressAlgorithm
{
    InvalidAlgorithm = 0,
    NullAlgorithm = 1,
    Mszip = 2,
    Xpress = 3,
    XpressHuff = 4,
    Lzms = 5,
};

}

}
