#pragma once
#include "CoreMinimal.h"
#include "ESBZFactionAttitude.h"
#include "SBZFactionNameHelper.h"
#include "SBZFactionAttitude.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZFactionAttitude {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFactionNameHelper SourceFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZFactionNameHelper TargetFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZFactionAttitude Attitude;
    
    FSBZFactionAttitude();
};

