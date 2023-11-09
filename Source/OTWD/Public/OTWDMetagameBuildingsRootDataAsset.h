#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDMetagameBuildingsRootDataAsset.generated.h"

class UDataTable;
class UOTWDMetagameSurvivorBuildingDataAsset;

UCLASS(Blueprintable, Const)
class UOTWDMetagameBuildingsRootDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameSurvivorBuildingDataAsset*> BuildingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDMetagameSurvivorBuildingDataAsset* HQData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BonusUnlockLevelGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TypeClassModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SurvivorLevelModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MoraleModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InjuredModifier;
    
    UOTWDMetagameBuildingsRootDataAsset();
};

