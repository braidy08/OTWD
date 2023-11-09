#pragma once
#include "CoreMinimal.h"
#include "SBZObjectiveConstructionParameters.generated.h"

class USBZObjectiveSchematic;

USTRUCT(BlueprintType)
struct FSBZObjectiveConstructionParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZObjectiveSchematic* ParentObjective;
    
    STARBREEZE_API FSBZObjectiveConstructionParameters();
};

