#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "OTWDBTService_WakeupCheck.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDBTService_WakeupCheck : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector WakeuperKey;
    
public:
    UOTWDBTService_WakeupCheck();
};

