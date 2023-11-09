#pragma once
#include "CoreMinimal.h"
#include "SBZPickupItem.h"
#include "SBZAmmoPickupItem.generated.h"

class ASBZCharacter;
class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAmmoPickupItem : public ASBZPickupItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddOnlyToCurrent;
    
public:
    ASBZAmmoPickupItem();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnPickup(ASBZCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors);
    
};

