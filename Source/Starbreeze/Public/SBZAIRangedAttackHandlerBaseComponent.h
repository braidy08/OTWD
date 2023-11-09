#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ERangedAttackState.h"
#include "SBZShootingMemory.h"
#include "SBZAIRangedAttackHandlerBaseComponent.generated.h"

class ASBZCoverPoint;
class ASBZHumanAICharacter;
class USBZAIAggroSystemComponent;
class USBZAIPerceptionMemoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIRangedAttackHandlerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCoverPoint* CoverPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZShootingMemory ShootingMemory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZHumanAICharacter* OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIPerceptionMemoryComponent* MemoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIAggroSystemComponent* AggroComponent;
    
public:
    USBZAIRangedAttackHandlerBaseComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERangedAttackState GetCurrentAttackState() const;
    
};

