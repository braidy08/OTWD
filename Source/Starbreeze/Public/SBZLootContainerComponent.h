#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESBZLootInteractableState.h"
#include "OnItemsChangedLCDelegate.h"
#include "SBZAutoPickUpItemCount.h"
#include "Templates/SubclassOf.h"
#include "SBZLootContainerComponent.generated.h"

class USBZBaseInteractorComponent;
class USBZInteractableComponent;
class USBZInteractableTemplate;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZLootContainerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSetupAllInteractables, const TArray<USBZInteractableComponent*>&, Interactables);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSetContainerInteractable, USBZInteractableComponent*, Interactable, int32, InteractableIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnIsRelevantChanged, USBZInteractableComponent*, Interactable, USBZBaseInteractorComponent*, Interactor, bool, bIsRelevant, int32, InteractableIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLootContainerInteractable, USBZInteractableComponent*, Interactable, int32, InteractableIndex, USBZBaseInteractorComponent*, Interactor);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLootContainerInteractable OnStartLootingContainer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLootContainerInteractable OnStopLootingContainer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLootContainerInteractable OnLootedContainer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLootContainerInteractable OnCorrectionSetClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLootContainerInteractable OnCorrectionSetLooted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetContainerInteractable OnSetContainerLooted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetContainerInteractable OnSetContainerClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSetupAllInteractables OnSetupInteractables;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemsChangedLC OnItemsChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsRelevantChanged OnIsRelevantChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZInteractableTemplate> InteractionTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLootCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZAutoPickUpItemCount> ItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPickUpDistributionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InteractableState, meta=(AllowPrivateAccess=true))
    ESBZLootInteractableState InteractableState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumExtraInteractables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_ExtraInteractables, meta=(AllowPrivateAccess=true))
    TArray<USBZInteractableComponent*> ExtraInteractables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ExtraInteractableStates, meta=(AllowPrivateAccess=true))
    TArray<ESBZLootInteractableState> ExtraInteractableStates;
    
    USBZLootContainerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetNumInteractables(uint8 InNumInteractables);
    
    UFUNCTION(BlueprintCallable)
    void SetAllInteractablesEnabled(bool bShouldEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractableState(ESBZLootInteractableState OldState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtraInteractableStates(const TArray<ESBZLootInteractableState>& OldExtraStates);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtraInteractables();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnItemsChanged(const TArray<FSBZAutoPickUpItemCount>& Items);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnIsRelevantChanged(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor, bool bIsRelevant);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionStarted(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionEnded(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void InteractionSpawnPickUpLoot(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetNumInteractables() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxLootCapacity();
    
    UFUNCTION(BlueprintCallable)
    void GetInteractableStates(TArray<ESBZLootInteractableState>& OutStates);
    
    UFUNCTION(BlueprintCallable)
    ESBZLootInteractableState GetInteractableStateByIndex(uint8 InteractableIndex);
    
    UFUNCTION(BlueprintCallable)
    ESBZLootInteractableState GetInteractableState(USBZInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInteractableIndex(USBZInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable)
    void GetInteractableComponents(TArray<USBZInteractableComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable)
    USBZInteractableComponent* GetInteractableByIndex(uint8 InteractableIndex);
    
};

