#pragma once
#include "CoreMinimal.h"
#include "PatrolInfo.generated.h"

class ASBZAIPatrolPoint;

USTRUCT(BlueprintType)
struct FPatrolInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIPatrolPoint* AIPatrolPointStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIPatrolPoint* AILastPatrolPointReached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bResetPatrolPath;
    
    STARBREEZE_API FPatrolInfo();
};

