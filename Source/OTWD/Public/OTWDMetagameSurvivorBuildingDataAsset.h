#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EBuildingType.h"
#include "OTWDBuildingBonusInfo.h"
#include "OTWDBuildingLevelInfo.h"
#include "OTWDMetagameSurvivorBuildingDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable, Const)
class UOTWDMetagameSurvivorBuildingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingType BuildingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDBuildingBonusInfo> BuildingBounusesInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDBuildingLevelInfo> BuildingLevelsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BuildingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> BuildingLargeImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfSurvivorSlots;
    
    UOTWDMetagameSurvivorBuildingDataAsset();
};

