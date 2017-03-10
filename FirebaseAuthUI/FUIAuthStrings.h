//
//  Copyright (c) 2016 Google Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kStr_ASCellAddPassword;
extern NSString *const kStr_ASCellChangePassword;
extern NSString *const kStr_ASCellDeleteAccount;
extern NSString *const kStr_ASCellEmail;
extern NSString *const kStr_ASCellName;
extern NSString *const kStr_ASCellSignOut;
extern NSString *const kStr_ASSectionTitleLinkedAccounts;
extern NSString *const kStr_ASSectionTitleProfile;
extern NSString *const kStr_ASSectionTitleSecurity;
extern NSString *const kStr_AccountDisabledError;
extern NSString *const kStr_AuthPickerTitle;
extern NSString *const kStr_Back;
extern NSString *const kStr_Cancel;
extern NSString *const kStr_CannotAuthenticateError;
extern NSString *const kStr_ChoosePassword;
extern NSString *const kStr_Close;
extern NSString *const kStr_Email;
extern NSString *const kStr_EmailAlreadyInUseError;
extern NSString *const kStr_EnterYourEmail;
extern NSString *const kStr_EnterYourPassword;
extern NSString *const kStr_Error;
extern NSString *const kStr_ExistingAccountTitle;
extern NSString *const kStr_FirstAndLastName;
extern NSString *const kStr_ForgotPassword;
extern NSString *const kStr_InvalidEmailError;
extern NSString *const kStr_InvalidPasswordError;
extern NSString *const kStr_Name;
extern NSString *const kStr_Next;
extern NSString *const kStr_OK;
extern NSString *const kStr_Password;
extern NSString *const kStr_PasswordRecoveryEmailSentMessage;
extern NSString *const kStr_PasswordRecoveryEmailSentTitle;
extern NSString *const kStr_PasswordRecoveryMessage;
extern NSString *const kStr_PasswordRecoveryTitle;
extern NSString *const kStr_PasswordVerificationMessage;
extern NSString *const kStr_ProviderUsedPreviouslyMessage;
extern NSString *const kStr_Save;
extern NSString *const kStr_Send;
extern NSString *const kStr_SignInTitle;
extern NSString *const kStr_SignInTooManyTimesError;
extern NSString *const kStr_SignInWithEmail;
extern NSString *const kStr_SignUpTitle;
extern NSString *const kStr_SignUpTooManyTimesError;
extern NSString *const kStr_TermsOfService;
extern NSString *const kStr_TermsOfServiceNotice;
extern NSString *const kStr_UserNotFoundError;
extern NSString *const kStr_WeakPasswordError;
extern NSString *const kStr_WrongPasswordError;
extern NSString *const kStr_CantFindProvider;
extern NSString *const kStr_EmailsDontMatch;
extern NSString *const kStr_ForgotPassword;
extern NSString *const kStr_VerifyItsYou;
extern NSString *const kStr_DeleteAccountConfimationTitle;
extern NSString *const kStr_DeleteAccountBody;
extern NSString *const kStr_DeleteAccountConfirmationMessage;
extern NSString *const kStr_Delete;
extern NSString *const kStr_DeleteAccountControllerTitle;
extern NSString *const kStr_ActionCantBeUndone;
extern NSString *const kStr_UnlinkTitle;
extern NSString *const kStr_UnlinkAction;
extern NSString *const kStr_UnlinkConfirmationTitle;
extern NSString *const kStr_UnlinkConfirmationMessage;
extern NSString *const kStr_UnlinkConfirmationActionTitle;
extern NSString *const kStr_UpdateEmailAlertMessage;
extern NSString *const kStr_UpdateEmailVerificationAlertMessage;
extern NSString *const kStr_AddPasswordAlertMessage;
extern NSString *const kStr_EditPasswordAlertMessage;
extern NSString *const kStr_ReauthenticateEditPasswordAlertMessage;
extern NSString *const kStr_AddPasswordTitle;
extern NSString *const kStr_EditPasswordTitle;
extern NSString *const kStr_EditNameTitle;
extern NSString *const kStr_EditEmailTitle;
extern NSString *const kStr_ProviderTitlePassword;
extern NSString *const kStr_ProviderTitleGoogle;
extern NSString *const kStr_ProviderTitleFacebook;
extern NSString *const kStr_ProviderTitleTwitter;
extern NSString *const kStr_SignInWithProvider;

#ifdef __cplusplus
extern "C" {
#endif

/** @fn FUILocalizedString
    @brief Gets a localized string from a name.
    @param name The key value of the string.
    @return The string by the key localized in the current locale.
 */
NSString *FUILocalizedString(NSString *key);

#ifdef __cplusplus
}
#endif

NS_ASSUME_NONNULL_END
