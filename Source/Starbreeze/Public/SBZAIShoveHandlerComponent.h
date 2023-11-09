#pragma once
#include "CoreMinimal.h"
#include "ESBZAIShoveInfo.h"
#include "SBZCharacterShoveHandlerComponent.h"
#include "SBZAIShoveHandlerComponent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIShoveHandlerComponent : public USBZCharacterShoveHandlerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TankShoveHitSuccessSoundEvent;
    
public:
    USBZAIShoveHandlerComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTimerEnd();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRecoverEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnAnticipationEnd();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetShoveState(ESBZAIShoveInfo NewShoveState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZAIShoveInfo GetShoveState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShove() const;
    
};

