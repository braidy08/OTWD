#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessLevelNameHelper.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlertnessLevelNameHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    FSBZAlertnessLevelNameHelper();
};

