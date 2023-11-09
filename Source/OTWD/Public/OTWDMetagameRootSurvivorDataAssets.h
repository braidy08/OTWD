#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDMetagameSurvivorTierTableRow.h"
#include "OTWDMetagameRootSurvivorDataAssets.generated.h"

class UDataTable;
class UOTWDMetagameSurvivorCampMoraleLevelData;
class UOTWDMetagameSurvivorClassDataAsset;

UCLASS(Blueprintable, Const)
class UOTWDMetagameRootSurvivorDataAssets : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameSurvivorClassDataAsset*> ClassTypesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SurvivorIdentitiesDataTable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MinSurvivorMaxLevel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MaxSurvivorMaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceOfShowingPotential;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChancheOfSurvivorBeingHealedWhileInInjuredState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* XpToNextLevelDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDMetagameSurvivorCampMoraleLevelData*> SurvivorMoraleLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDMetagameSurvivorTierTableRow> SurvivorTierTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentageProvisionsCostToBanishASurvivor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumBanishedSurvivorProvisionCost;
    
    UOTWDMetagameRootSurvivorDataAssets();
};

