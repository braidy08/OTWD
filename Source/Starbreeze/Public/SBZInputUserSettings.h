#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "OnActionRebindAttemptDelegate.h"
#include "OnActionRebindingDelegate.h"
#include "SBZInputUserSettings.generated.h"

class ASBZPlayerController;
class USBZInputUserSettings;

UCLASS(Blueprintable, Config=Input)
class STARBREEZE_API USBZInputUserSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionRebindAttempt OnNextRebindAttemptDone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionRebinding OnAnyActionRebound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionRebinding OnKeyMappingApplied;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> ActionMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputAxisKeyMapping> AxisMappings;
    
public:
    USBZInputUserSettings();
    UFUNCTION(BlueprintCallable)
    void StopRebinding(ASBZPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    bool StartRebinding(ASBZPlayerController* Controller, FName Action, int32 BindingIndex, bool bApplyOnSuccess);
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefault(bool bApply);
    
    UFUNCTION(BlueprintCallable)
    void ResetChanges();
    
    UFUNCTION(BlueprintCallable)
    static bool IsActionRebindable(FName Action);
    
    UFUNCTION(BlueprintCallable)
    bool HasChanges();
    
    UFUNCTION(BlueprintCallable)
    static USBZInputUserSettings* GetUserInputSettings();
    
    UFUNCTION(BlueprintCallable)
    FKey GetReboundActionKey(FName Action, int32 BindingIndex);
    
    UFUNCTION(BlueprintCallable)
    void ApplySettings();
    
};

