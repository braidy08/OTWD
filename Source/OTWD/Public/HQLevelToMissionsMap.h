#pragma once
#include "CoreMinimal.h"
#include "HQLevelToMissionsMap.generated.h"

USTRUCT(BlueprintType)
struct FHQLevelToMissionsMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HQLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMissionsGainedPerDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAvailableMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MissionsPerBracket;
    
    OTWD_API FHQLevelToMissionsMap();
};

