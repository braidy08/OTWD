#pragma once
#include "CoreMinimal.h"
#include "EMeleeAttackCategory.h"
#include "SBZStandardImpactData.h"
#include "Templates/SubclassOf.h"
#include "SBZMeleeImpactData.generated.h"

class ASBZImpactActor;

USTRUCT(BlueprintType)
struct FSBZMeleeImpactData : public FSBZStandardImpactData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMeleeAttackCategory, float> CategoryDecalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZImpactActor> ImpactActorClass;
    
    STARBREEZE_API FSBZMeleeImpactData();
};

