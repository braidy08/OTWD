#pragma once
#include "CoreMinimal.h"
#include "EDefaultBehaviour.h"
#include "ZombieBehaviourData.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FZombieBehaviourData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDefaultBehaviour Behaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FZombieBehaviourData();
};

