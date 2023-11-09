#pragma once
#include "CoreMinimal.h"
#include "EHordeNoiseLoudness.h"
#include "HordeNoiseData.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FHordeNoiseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHordeNoiseLoudness Loudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnableNoiseAfterBuildPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FHordeNoiseData();
};

