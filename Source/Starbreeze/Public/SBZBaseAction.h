#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "SBZActionEnabledChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZBaseAction.generated.h"

class USBZBaseAction;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STARBREEZE_API USBZBaseAction : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<USBZBaseAction>> PreventedByActionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<USBZBaseAction>> BreaksActionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<USBZBaseAction>> InterrupsActionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsQueuedOnPrevent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsQueuedOnBreakingOtherAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsQueuedOnInterrupt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DisabledByGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InterruptedByGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZActionEnabledChanged OnEnabledChanged;
    
public:
    USBZBaseAction();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQueued() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlocking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAction(const TSubclassOf<USBZBaseAction> ActionType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanRedo() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanEnable();
    
    UFUNCTION(BlueprintCallable)
    bool CanBreak();
    
};

