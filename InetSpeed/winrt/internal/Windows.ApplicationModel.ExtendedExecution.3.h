// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once

#include "Windows.ApplicationModel.ExtendedExecution.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::ExtendedExecution {

struct WINRT_EBO ExtendedExecutionRevokedEventArgs :
    Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs
{
    ExtendedExecutionRevokedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ExtendedExecutionSession :
    Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionSession
{
    ExtendedExecutionSession(std::nullptr_t) noexcept {}
    ExtendedExecutionSession();
};

}

}
