#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZButtonInputType.h"
#include "EUserPrivilegesProxy.h"
#include "OnIISInteractionDelegate.h"
#include "SBZUserManager.generated.h"

class USBZGameInstance;
class USBZPopupWidget;
class UUserWidget;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZUserManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnQueryUserPrivilegeComplete, EUserPrivilegesProxy, PrivilegeType, bool, PrivilegeQuerySucceeded, int32, PrivilegeQueryResults);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIISInteraction IISInteractionDelegate;
    
    USBZUserManager();
    UFUNCTION(BlueprintCallable)
    void StopListeningForIISInput();
    
    UFUNCTION(BlueprintCallable)
    void StartListeningForIISInput();
    
    UFUNCTION(BlueprintCallable)
    void ShowUpgradeScreen();
    
    UFUNCTION(BlueprintCallable)
    void ShowReturntoIISPopup();
    
    UFUNCTION(BlueprintCallable)
    void ShowLoginScreen(int32 UserIndex, bool bIsOnIIS);
    
    UFUNCTION(BlueprintCallable)
    void SetSavedDataOwnerAsValid();
    
    UFUNCTION(BlueprintCallable)
    void SetPerformingAUserPrivilegeCheck(bool PerfomingQuery);
    
    UFUNCTION(BlueprintCallable)
    void SetCanCommunicateOnline(bool CanCommunicateOnline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SavedDataOwnerValid() const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserPrivilegeResultUsingLocalAccountFlagSet(int32 PrivilegeResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserPrivilegeResultUserNotLoggedInFlagSet(int32 PrivilegeResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserPrivilegeResultUserNotFoundFlagSet(int32 PrivilegeResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserPrivilegeResultUGCRestrictionFlagSet(int32 PrivilegeResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserPrivilegeResultRequiredSystemUpdateFlagSet(int32 PrivilegeResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserPrivilegeResultRequiredPatchAvailableFlagSet(int32 PrivilegeResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserPrivilegeResultOnlinePlayRestrictedFlagSet(int32 PrivilegeResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserPrivilegeResultGenericFailureFlagSet(int32 PrivilegeResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserPrivilegeResultChatRestrictionFlagSet(int32 PrivilegeResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserPrivilegeResultAgeRestrictionFailureFlagSet(int32 PrivilegeResult);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUserPrivilegeResultAccountTypeFailureFlagSet(int32 PrivilegeResult);
    
    UFUNCTION(BlueprintCallable)
    bool IsPerformingAUserPrivilegeCheck();
    
    UFUNCTION(BlueprintCallable)
    void Init(USBZGameInstance* NewGameInstance);
    
    UFUNCTION(BlueprintCallable)
    void HandleReturnToIISPopupInput(const FName ActionName, ESBZButtonInputType Type, USBZPopupWidget* WidgetPointer);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnlineRestrictionPopupInput(const FName ActionName, ESBZButtonInputType Type, USBZPopupWidget* WidgetPointer);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleControllerDisconnectedPopupInput(const FName ActionName, ESBZButtonInputType Type, USBZPopupWidget* WidgetPointer);
    
public:
    UFUNCTION(BlueprintCallable)
    UWorld* GetWorldContextObject();
    
    UFUNCTION(BlueprintCallable)
    FText GetCurrentUserName();
    
    UFUNCTION(BlueprintCallable)
    void CanPlayOnlineFailedShowPopup(UUserWidget* UserPrivilegePopupWidget, int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    FText CanPlayOnlineFailedPopupSetup(int32 PrivilegeResult);
    
};

