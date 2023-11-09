#pragma once
#include "CoreMinimal.h"
#include "SBZAIStanceIdHelper.h"
#include "SBZBaseSpawnBehaviour.h"
#include "SBZMoveToSpawnBehaviour.generated.h"

class ASBZAIPatrolPoint;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMoveToSpawnBehaviour : public USBZBaseSpawnBehaviour {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZAIPatrolPoint* PatrolPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAIStanceIdHelper OverrideStance;
    
    USBZMoveToSpawnBehaviour();
};

