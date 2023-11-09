#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ESBZBTTask_GetWanderLocation_Method.h"
#include "BTTask_BP_CPP_Base.h"
#include "BTTask_SetRoaming.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTTask_SetRoaming : public UBTTask_BP_CPP_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector RoamingMethodKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBTTask_GetWanderLocation_Method Method;
    
    UBTTask_SetRoaming();
};

