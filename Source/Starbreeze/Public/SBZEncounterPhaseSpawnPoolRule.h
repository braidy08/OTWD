#pragma once
#include "CoreMinimal.h"
#include "ESBZNumericComparison.h"
#include "SBZEncounterPhaseRule.h"
#include "SBZEncounterPhaseSpawnPoolRule.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZEncounterPhaseSpawnPoolRule : public USBZEncounterPhaseRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckSpawnPoolPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingSpawnPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingSpawnPoolPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZNumericComparison ComparisonMethod;
    
    USBZEncounterPhaseSpawnPoolRule();
};

