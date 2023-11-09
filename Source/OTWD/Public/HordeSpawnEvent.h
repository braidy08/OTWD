#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HordeWeightedEnemy.h"
#include "HordeSpawnEvent.generated.h"

class USBZCurveFloatInterval;

USTRUCT(BlueprintType)
struct OTWD_API FHordeSpawnEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveHordeBuildUpValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnActivatedFreezeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZCurveFloatInterval* PopulationCycleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PopulationCycleAmplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PopulationCyclePeriod;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerCountMultipliers[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHordeWeightedEnemy> EnemySchematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EventControllerColour;
    
    FHordeSpawnEvent();
};

