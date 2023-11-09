#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ZombieBehaviourData.h"
#include "ZombieDefaultBehaviourData.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FZombieDefaultBehaviourData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomRoamMaxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FZombieBehaviourData> Behaviours;
    
    FZombieDefaultBehaviourData();
};

