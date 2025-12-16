#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=ESBZDifficulty -FallbackName=ESBZDifficulty
#include "OTWDQuestObjectiveRequirements.generated.h"

class USBZLevelSchematic;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDQuestObjectiveRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZLevelSchematic*> ObjectiveLevelsRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDifficulty MinimumDifficulty;
    
    FOTWDQuestObjectiveRequirements();
};

