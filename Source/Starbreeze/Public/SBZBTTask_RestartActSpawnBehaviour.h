#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBZBTTask_RestartActSpawnBehaviour.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_RestartActSpawnBehaviour : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckRepeatability;
    
    USBZBTTask_RestartActSpawnBehaviour();
};

