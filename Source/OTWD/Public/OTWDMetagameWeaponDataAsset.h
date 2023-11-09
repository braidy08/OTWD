#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDMetagameWeaponSettingsByDifficulty.h"
#include "OTWDMetagameWeaponSettingsByFamily.h"
#include "OTWDMetagameWeaponSettingsByPlayerLevel.h"
#include "OTWDMetagameWeaponSettingsByRarity.h"
#include "OTWDMetagameWeaponDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class OTWD_API UOTWDMetagameWeaponDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOTWDMetagameWeaponSettingsByRarity RarityWeaponSettings[7];
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOTWDMetagameWeaponSettingsByFamily FamilyWeaponSettings[13];
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOTWDMetagameWeaponSettingsByDifficulty DifficultyWeaponSettings[4];
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FOTWDMetagameWeaponSettingsByPlayerLevel> PlayerLevelWeaponSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponMetaDataByRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponMetaDataByFamily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponMetaDataByDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponMetaDataByLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAmountInVault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAmountInPostmaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxWeaponPowerLevel;
    
    UOTWDMetagameWeaponDataAsset();
    UFUNCTION(BlueprintCallable)
    void ParseDataTables();
    
};

