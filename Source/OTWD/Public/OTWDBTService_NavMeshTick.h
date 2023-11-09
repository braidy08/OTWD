#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "OTWDBTService_NavMeshTick.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDBTService_NavMeshTick : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TickKey;
    
public:
    UOTWDBTService_NavMeshTick();
};

