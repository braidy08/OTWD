#pragma once
#include "CoreMinimal.h"
#include "SBZAttackEndStruct.h"
#include "SBZCharacterGotHitStruct.h"
#include "SBZGameEventTrackerBase.h"
#include "SBZPlayerAttackStruct.h"
#include "SBZProjectileHitStruct.h"
#include "SBZGameEventPlayerAttackTracker.generated.h"

UCLASS(Blueprintable)
class USBZGameEventPlayerAttackTracker : public USBZGameEventTrackerBase {
    GENERATED_BODY()
public:
    USBZGameEventPlayerAttackTracker();
    UFUNCTION(BlueprintCallable)
    void OnProjectileHit(FSBZProjectileHitStruct ProjectileHitStruct);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerAttack(FSBZPlayerAttackStruct PlayerAttackStruct);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterGotHit(FSBZCharacterGotHitStruct CharacterGotHitStruct);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackEnd(FSBZAttackEndStruct AttackEndStruct);
    
};

