#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZAIAggroSystemData.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZCurrentAggroTarget.h"
#include "SBZTargetAggro.h"
#include "SBZAIAggroSystemComponent.generated.h"

class AActor;
class AController;
class ASBZAICharacter;
class ASBZAIController;
class UDamageType;
class USBZAIPerceptionComponent;
class USBZAlertnessComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIAggroSystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIAggroSystemData AggroSystemData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIPerceptionComponent* AIPerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* AIOwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIController* AIOwnerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZTargetAggro> KnownTargetAggros;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZCurrentAggroTarget CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZCurrentAggroTarget LastAttackedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAlertnessComponent* AlertnessComponent;
    
public:
    USBZAIAggroSystemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCause);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnArmorHit(AActor* ArmorOwner, AActor* HitArmor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAlertnessChanged(USBZAlertnessComponent* Sender, FSBZAlertnessLevelIdHelper NewLevel, FSBZAlertnessLevelIdHelper OldLevel);
    
};

