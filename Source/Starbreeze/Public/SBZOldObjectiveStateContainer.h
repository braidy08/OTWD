#pragma once
#include "CoreMinimal.h"
#include "SBZOldObjectiveState.h"
#include "SBZOldObjectiveStateContainer.generated.h"

USTRUCT(BlueprintType)
struct FSBZOldObjectiveStateContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZOldObjectiveState> ObjectiveStateData;
    
    STARBREEZE_API FSBZOldObjectiveStateContainer();
};

