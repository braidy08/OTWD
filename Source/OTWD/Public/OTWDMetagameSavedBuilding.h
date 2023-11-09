#pragma once
#include "CoreMinimal.h"
#include "OTWDMetagameSavedSurvivor.h"
#include "OTWDMetagameSavedBuilding.generated.h"

class UOTWDMetagameSurvivorBuildingDataAsset;

USTRUCT(BlueprintType)
struct FOTWDMetagameSavedBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDMetagameSurvivorBuildingDataAsset* BuildingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDMetagameSavedSurvivor> SurvivorsInBuilding;
    
    OTWD_API FOTWDMetagameSavedBuilding();
};

