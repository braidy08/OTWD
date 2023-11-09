#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AsyncLoadLevelParams.generated.h"

class USBZLevelSchematic;

USTRUCT(BlueprintType)
struct STARBREEZE_API FAsyncLoadLevelParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZLevelSchematic* LevelSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TimeOutTimerHandle;
    
    FAsyncLoadLevelParams();
};

