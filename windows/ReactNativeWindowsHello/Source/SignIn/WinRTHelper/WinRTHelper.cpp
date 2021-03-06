#include "pch.h"
#include "WinRTHelper.hpp"

namespace winrt::ReactNativeWindowsHello::SignIn
{
    std::string WinRtHelper::UserConsentVerifierAvailabilityToMessage( const Windows::Security::Credentials::UI::UserConsentVerifierAvailability& availability )
    {
        switch( availability )
        {
            case Windows::Security::Credentials::UI::UserConsentVerifierAvailability::Available:
                return "Biometric verification is available.";

            case Windows::Security::Credentials::UI::UserConsentVerifierAvailability::DeviceBusy:
                return "Biometric device is busy.";

            case Windows::Security::Credentials::UI::UserConsentVerifierAvailability::DeviceNotPresent:
                return "No biometric device found.";

            case Windows::Security::Credentials::UI::UserConsentVerifierAvailability::DisabledByPolicy:
                return "Biometric verification is disabled by policy.";

            case Windows::Security::Credentials::UI::UserConsentVerifierAvailability::NotConfiguredForUser:
                return "The user has no biometrics registered. Please add a biometric to the biometrics database and try again.";

            default:
                return "Biometrics verification is currently unavailable.";
        }
    }

    std::string WinRtHelper::UserConsentVerificationResultToMessage( const winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult& verificationResult )
    {
        switch( verificationResult )
        {
            case winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult::Verified:
                return "User was verified successfully";

            case winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult::DeviceNotPresent:
                return "Device not present";

            case winrt::Windows::Security::Credentials::UI::UserConsentVerificationResult::Canceled:
                return "Verification was canceled";

            default:
                return "Unrecognized status";
        }
    }
}
