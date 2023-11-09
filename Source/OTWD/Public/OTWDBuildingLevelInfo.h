#pragma once
#include "CoreMinimal.h"
#include "OTWDMetagameCurrency.h"
#include "OTWDBuildingLevelInfo.generated.h"

class USBZTech;

USTRUCT(BlueprintType)
struct FOTWDBuildingLevelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuildingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfSurvivorSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMetagameCurrency MaxResourcesIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZTech* TechNeededToUnlock;
    
    OTWD_API FOTWDBuildingLevelInfo();
};

