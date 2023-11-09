#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "ESBZEndMissionState.h"
#include "SBZMissionEndContext.generated.h"

class USBZLevelSchematic;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZMissionEndContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZEndMissionState EndState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* MissionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDifficulty MissionDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompletionPercentage;
    
    FSBZMissionEndContext();
};

