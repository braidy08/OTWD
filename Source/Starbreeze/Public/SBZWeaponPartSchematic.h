#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponRarity.h"
#include "SBZUnlockable.h"
#include "SBZWeaponPartDataRewardInfo.h"
#include "SBZWeaponPartMesh.h"
#include "SBZWeaponPartRarityStat.h"
#include "Templates/SubclassOf.h"
#include "SBZWeaponPartSchematic.generated.h"

class UGameplayEffect;
class USBZWeaponData;
class USBZWeaponMaterialSchematic;
class USBZWeaponPartSlot;
class USBZWeaponPartStatsSchematic;
class UTexture2D;

UCLASS(Blueprintable)
class STARBREEZE_API USBZWeaponPartSchematic : public USBZUnlockable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSlot* SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideWeaponRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponRarity DefaultRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponPartSlot*> DeniedSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> WeaponPartStatsEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartStatsSchematic* StatsSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponPartMesh> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponMaterialSchematic* MaterialParametersSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSlavePart;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponPartDataRewardInfo RewardInfo[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZWeaponPartRarityStat> RarityUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> StaticUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZWeaponPartRarityStat> OverrideRarityUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> OverrideStaticUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponData*> CompatibilityReferences;
    
    USBZWeaponPartSchematic();
    UFUNCTION(BlueprintCallable)
    void GenerateUIStats();
    
    UFUNCTION(BlueprintCallable)
    void GenerateCompatibility();
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, float> EvalUIData(ESBZWeaponRarity Rarity);
    
};

