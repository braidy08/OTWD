#pragma once
#include "CoreMinimal.h"
#include "SBZRealtimeVisibilitySettings.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZRealtimeVisibilitySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveSetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnCellDisabledForSecondsAfterSeen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnCellDirectionToPlayersCacheTime;
    
    FSBZRealtimeVisibilitySettings();
};

