#pragma once
#include "CoreMinimal.h"
#include "PathPathfinder.h"
#include "EventDrivenPathfinder.generated.h"

class UEventDrivenPathPlan;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API UEventDrivenPathfinder : public UPathPathfinder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEventDrivenPathPlan* Plan;
    
    UEventDrivenPathfinder();
};

