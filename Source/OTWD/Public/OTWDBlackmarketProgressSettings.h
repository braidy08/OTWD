#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "OTWDBlackmarketProgressSettings.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDBlackmarketProgressSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProgressRequired;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve RarityChanceCurve;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve PowerLevelRatioCurve;
    
    FOTWDBlackmarketProgressSettings();
};

