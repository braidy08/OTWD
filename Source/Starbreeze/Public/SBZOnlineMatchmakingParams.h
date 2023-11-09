#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "SBZOnlineMatchmakingParams.generated.h"

class USBZLevelSchematic;

USTRUCT(BlueprintType)
struct FSBZOnlineMatchmakingParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* LevelSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuickMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDifficulty Difficulty;
    
    STARBREEZE_API FSBZOnlineMatchmakingParams();
};

