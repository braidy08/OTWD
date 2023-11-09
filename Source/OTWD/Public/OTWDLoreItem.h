#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESBZVoiceComment.h"
#include "Templates/SubclassOf.h"
#include "OTWDLoreItem.generated.h"

class APawn;
class UAkAudioEvent;
class UAkComponent;
class UBoxComponent;
class UOTWDLibraryItemData;
class UOTWDQuestDataAsset;
class UParticleSystemComponent;
class USBZBaseInteractorComponent;
class USBZInteractableComponent;
class USBZInteractableTemplate;

UCLASS(Abstract, Blueprintable)
class OTWD_API AOTWDLoreItem : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractionShapeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZInteractableTemplate> InteractionTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDLibraryItemData* LibraryDataToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APawn>> CharactersThatCanUnlockItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDQuestDataAsset* QuestItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioEventOnPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AmbientAudioEventStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AmbientAudioEventEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoiceComment PickupComment;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
public:
    AOTWDLoreItem();
protected:
    UFUNCTION(BlueprintCallable)
    void OnLocalInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors);
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsInteractionAllowedByInteractor(const USBZBaseInteractorComponent* Interactor);
    
};

