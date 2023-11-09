#pragma once
#include "CoreMinimal.h"
#include "SBZBlueprintBase.h"
#include "PickedUpChangedDelegateDelegate.h"
#include "PickedUpDelegateDelegate.h"
#include "OTWDBlueprintPickup.generated.h"

class AOTWDPlayerCharacter;
class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UCLASS(Blueprintable)
class AOTWDBlueprintPickup : public ASBZBlueprintBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOTWDPlayerCharacter* Instagator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=UpdatePickUpState, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=UpdatePickUpState, meta=(AllowPrivateAccess=true))
    bool bIsPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickedUpDelegate OnPickedUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPickedUpChangedDelegate OnPickedUpStateChanged;
    
    AOTWDBlueprintPickup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePickUpState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPickedupState(bool bNewPickupState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsPickupInteractionAllowed();
    
private:
    UFUNCTION(BlueprintCallable)
    void IsPickedUpSetter(bool bVal);
    
    UFUNCTION(BlueprintCallable)
    void IsEnabledSetter(bool bVal);
    
    UFUNCTION(BlueprintCallable)
    void HandleServerInteractionSuccess(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetShouldBeVisible();
    
};

