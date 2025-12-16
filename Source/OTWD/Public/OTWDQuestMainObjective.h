#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=ESBZDifficulty -FallbackName=ESBZDifficulty
#include "OTWDQuestObjectiveRequirements.h"
#include "OTWDQuestMainObjective.generated.h"

class UOTWDQuestObjectiveBaseDataAsset;
class USBZLevelSchematic;

USTRUCT(BlueprintType)
struct OTWD_API FOTWDQuestMainObjective {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDQuestObjectiveRequirements ObjectiveRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* ObjectiveLevelRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDifficulty MinimumDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDQuestObjectiveBaseDataAsset*> SubObjectives;
    
    FOTWDQuestMainObjective();
};

