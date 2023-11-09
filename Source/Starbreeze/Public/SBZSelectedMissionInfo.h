#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "SBZSelectedMissionInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZSelectedMissionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LevelSchematicIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZDifficulty Difficulty;
    
    STARBREEZE_API FSBZSelectedMissionInfo();
};

