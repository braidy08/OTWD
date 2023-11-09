#pragma once
#include "CoreMinimal.h"
#include "SBZAIRangedAttackHandlerBaseComponent.h"
#include "SBZAIRangedWeaponAttackHandlerComponent.generated.h"

class AActor;
class AController;
class ASBZCombatManager;
class ASBZWeaponAI;
class UDamageType;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIRangedWeaponAttackHandlerComponent : public USBZAIRangedAttackHandlerBaseComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZWeaponAI* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCombatManager* CombatManager;
    
public:
    USBZAIRangedWeaponAttackHandlerComponent();
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCause);
    
};

