#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ESBZAlignSlotState.h"
#include "ESBZPinningType.h"
#include "LastPinningActorReleasedDelegateDelegate.h"
#include "PinVictimActorAddedDelegateDelegate.h"
#include "PinVictimActorRemovedDelegateDelegate.h"
#include "PinningActorAddedDelegateDelegate.h"
#include "PinningActorRemovedDelegateDelegate.h"
#include "SBZCharacterPinningComponent.generated.h"

class AActor;
class ASBZCharacter;
class USBZPlayerDefeatSettingsSchematic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZCharacterPinningComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPinningActorAddedDelegate PinningActorAddedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPinningActorRemovedDelegate PinningActorRemovedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLastPinningActorReleasedDelegate LastPinningActorReleasedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPinVictimActorAddedDelegate PinVictimActorAddedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPinVictimActorRemovedDelegate PinVictimActorRemovedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPlayerDefeatSettingsSchematic* DefeatSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ResetAlignSlotsTimerHandle;
    
public:
    USBZCharacterPinningComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StopPinningTheActor(AActor* ActorToRelease, bool bCallRemovePinnedActor);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePinnedActor(AActor* LeavingActor, bool bCallStopPinningTheActor);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseAllPinnedAndPinVictimActors();
    
    UFUNCTION(BlueprintCallable)
    bool PinActor(AActor* PinnedActor, ESBZPinningType PinningType, bool bWarnPinnedActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwningCharacterKilled(ASBZCharacter* KilledCharacter);
    
    UFUNCTION(BlueprintCallable)
    void OnAlignmentSlotStatusChanged(ESBZAlignSlotState InState, AActor* Occupant);
    
    UFUNCTION(BlueprintCallable)
    void HandlePinnedCharacterTeleported(ASBZCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void HandlePinnedActorDestroyed(AActor* DespawnedActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleAlignmentSlotAvailabilityToggled(bool bIsNowAnyAvailable);
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetPinnedByActor(AActor* IncomingPinningActor, ESBZPinningType PinningType, bool bWarnIncomingPinningActor, bool bCheckIsAlreadyPinningActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPinningActorsNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPinnedActorsNumber() const;
    
};

