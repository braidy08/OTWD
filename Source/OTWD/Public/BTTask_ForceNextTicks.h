#pragma once
#include "CoreMinimal.h"
#include "BTTask_BP_CPP_Base.h"
#include "BTTask_ForceNextTicks.generated.h"

UCLASS(Blueprintable)
class OTWD_API UBTTask_ForceNextTicks : public UBTTask_BP_CPP_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbTicksToForce;
    
public:
    UBTTask_ForceNextTicks();
};

