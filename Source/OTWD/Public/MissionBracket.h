#pragma once
#include "CoreMinimal.h"
#include "MissionBracket.generated.h"

USTRUCT(BlueprintType)
struct FMissionBracket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinLevelForBracket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLevelForBracket;
    
    OTWD_API FMissionBracket();
};

