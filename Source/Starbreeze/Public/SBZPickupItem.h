#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "ESBZPickedUpState.h"
#include "OnPickedUpStateChangedDelegate.h"
#include "SBZPickupItem.generated.h"

class ASBZCharacter;
class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZPickupItem : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickedUpStateChanged OnPickedUpStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PickedUpState, meta=(AllowPrivateAccess=true))
    ESBZPickedUpState PickedUpState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ChangedOwner, meta=(AllowPrivateAccess=true))
    ASBZCharacter* OwnerCharacter;
    
public:
    ASBZPickupItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPickedUp(ASBZCharacter* Character);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Remove(bool bDestroyItem);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PickedUpState(ESBZPickedUpState OldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChangedOwner(ASBZCharacter* OldCharacter);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnPickup(ASBZCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnIsRelevantChanged(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor, bool bIsRelevant);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionStarted(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionEnded(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OnPickup(ASBZCharacter* Character);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Remove();
    
};

