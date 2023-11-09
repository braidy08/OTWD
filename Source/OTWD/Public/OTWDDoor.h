#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ESBZDoorActionType.h"
#include "SBZDoor.h"
#include "OTWDDoor.generated.h"

class UAkAudioEvent;
class UMaterialInterface;
class USBZBaseInteractorComponent;
class USBZInteractableComponent;

UCLASS(Blueprintable)
class OTWD_API AOTWDDoor : public ASBZDoor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> BarricadeGhostMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BarricadeSoundParticleEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DoorHitSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DoorHitMuffledSoundEvent;
    
public:
    AOTWDDoor();
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHealth(float InHealth);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Datas();
    
    UFUNCTION(BlueprintCallable)
    void OnInteractableIsRelevantChanged(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor, bool bIsRelevant);
    
    UFUNCTION(BlueprintCallable)
    void OnBarricadePlankRemoved(int32 BarricadePlankIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBarricadePlankAdded(int32 BarricadePlankIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPendingAction(ESBZDoorActionType PengingActionType);
    
};

