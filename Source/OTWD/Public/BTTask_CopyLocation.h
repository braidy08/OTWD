#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_BP_CPP_Base.h"
#include "BTTask_CopyLocation.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTTask_CopyLocation : public UBTTask_BP_CPP_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LocationKey;
    
    UBTTask_CopyLocation();
};

