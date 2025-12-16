#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZGameTimeTo.h"
#include "AutomaticReinforcement.generated.h"

class USBZEncounterGroupSchematic;

USTRUCT(BlueprintType)
struct FAutomaticReinforcement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEncounterGroupSchematic* EncounterGroup;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ReinforcementTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameTimeTo TimeToNextReinforcement;
    
    STARBREEZE_API FAutomaticReinforcement();
};

