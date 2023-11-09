#pragma once
#include "CoreMinimal.h"
#include "IncrementAttackSequencePrediction.generated.h"

USTRUCT(BlueprintType)
struct FIncrementAttackSequencePrediction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeavyAttackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightAttackIndex;
    
    STARBREEZE_API FIncrementAttackSequencePrediction();
};

