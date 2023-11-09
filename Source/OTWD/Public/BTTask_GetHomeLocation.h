#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_BP_CPP_Base.h"
#include "BTTask_GetHomeLocation.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTTask_GetHomeLocation : public UBTTask_BP_CPP_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetLocationKey;
    
    UBTTask_GetHomeLocation();
};

