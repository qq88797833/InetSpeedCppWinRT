// C++ for the Windows Runtime v1.29
// Copyright (c) 2016 Microsoft Corporation

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::Authentication::OnlineId {

struct IOnlineIdAuthenticator;
struct IOnlineIdServiceTicket;
struct IOnlineIdServiceTicketRequest;
struct IOnlineIdServiceTicketRequestFactory;
struct IUserIdentity;
struct OnlineIdAuthenticator;
struct OnlineIdServiceTicket;
struct OnlineIdServiceTicketRequest;
struct SignOutUserOperation;
struct UserAuthenticationOperation;
struct UserIdentity;

}

namespace Windows::Security::Authentication::OnlineId {

struct IOnlineIdAuthenticator;
struct IOnlineIdServiceTicket;
struct IOnlineIdServiceTicketRequest;
struct IOnlineIdServiceTicketRequestFactory;
struct IUserIdentity;
struct OnlineIdAuthenticator;
struct OnlineIdServiceTicket;
struct OnlineIdServiceTicketRequest;
struct SignOutUserOperation;
struct UserAuthenticationOperation;
struct UserIdentity;

}

namespace Windows::Security::Authentication::OnlineId {

enum class CredentialPromptType
{
    PromptIfNeeded = 0,
    RetypeCredentials = 1,
    DoNotPrompt = 2,
};

}

}
