#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZEncounterWeightingBehaviourBase.h"
#include "SBZEncounterWeightingBehaviourDistanceToPlayers.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZEncounterWeightingBehaviourDistanceToPlayers : public USBZEncounterWeightingBehaviourBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange PreferredDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightAtMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeightAtMaxDistance;
    
    USBZEncounterWeightingBehaviourDistanceToPlayers();
};

