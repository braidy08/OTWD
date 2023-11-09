#pragma once
#include "CoreMinimal.h"
#include "SBZMeleeAttackMovementSpeed.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZMeleeAttackMovementSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindupMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryMultiplier;
    
    FSBZMeleeAttackMovementSpeed();
};

