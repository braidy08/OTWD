#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDWeaponLootMetaByLevel.h"
#include "OTWDWeaponLootMetaByRarity.h"
#include "OTWDWeaponLootMetaDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class OTWD_API UOTWDWeaponLootMetaDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FOTWDWeaponLootMetaByLevel> WeaponLootMeta_PlayerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FOTWDWeaponLootMetaByRarity> WeaponLootMeta_Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponLootMetaByLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WeaponLootMetaByRarity;
    
public:
    UOTWDWeaponLootMetaDataAsset();
};

