#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESBZGhostInteractionDataSlot.h"
#include "OnGhostInteractableInitializedDelegate.h"
#include "SBZGhostInteractableLink.h"
#include "SBZGhostInteractionData.h"
#include "SBZGhostModeHandlerComponent.generated.h"

class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZGhostModeHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGhostInteractableInitialized OnGhostInteractableInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZGhostInteractionDataSlot, FSBZGhostInteractionData> GhostInteractionDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GhostInteractableLinks, meta=(AllowPrivateAccess=true))
    TArray<FSBZGhostInteractableLink> GhostInteractableLinks;
    
public:
    USBZGhostModeHandlerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowGhost(USBZInteractableComponent* InInteractable, bool bShow);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Server_SetGhostModeEnableForAll(bool bActive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    USBZInteractableComponent* Server_AddGhostInteraction(ESBZGhostInteractionDataSlot Slot, USBZInteractableComponent* InInteractable);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GhostInteractableLinks();
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionStateChanged(USBZInteractableComponent* GhostInteractable, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnGhostInteractableHighlightMeshesChanged(USBZInteractableComponent* GhostInteractable);
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    ESBZGhostInteractionDataSlot GetGhostInteractionDataSlot(USBZInteractableComponent* InGhostInteractable);
    
    UFUNCTION(BlueprintCallable)
    FSBZGhostInteractionData GetGhostInteractionDataBySlot(ESBZGhostInteractionDataSlot Slot);
    
    UFUNCTION(BlueprintCallable)
    USBZInteractableComponent* GetAssociatedRegularInteractable(USBZInteractableComponent* InGhostInteractable);
    
    UFUNCTION(BlueprintCallable)
    USBZInteractableComponent* GetAssociatedGhostInteractable(USBZInteractableComponent* InInteractable);
    
};

