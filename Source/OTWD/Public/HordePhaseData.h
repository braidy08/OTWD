#pragma once
#include "CoreMinimal.h"
#include "EDramaCheckRule.h"
#include "HordePhaseData.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FHordePhaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeInPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhasePopulationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEarlyExitDueToDrama;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDramaCheckRule EarlyExitDrama;
    
    FHordePhaseData();
};

