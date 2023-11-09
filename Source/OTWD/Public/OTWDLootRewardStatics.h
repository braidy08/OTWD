#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESBZDifficulty.h"
#include "ESBZWeaponRarity.h"
#include "OTWDLootRewardStatics.generated.h"

class UOTWDMetagameWeaponDataAsset;
class UOTWDProfileSaveData;
class USBZWeaponData;
class USBZWeaponPartSlot;

UCLASS(Blueprintable)
class OTWD_API UOTWDLootRewardStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOTWDLootRewardStatics();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<float> GetRarityWeightsFromPlayer(const UOTWDProfileSaveData* ProfileSaveData, const UOTWDMetagameWeaponDataAsset* MetagameWeaponAsset, ESBZDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESBZWeaponRarity GetLowestGeneratableRarity(const UOTWDProfileSaveData* ProfileSaveData, const UOTWDMetagameWeaponDataAsset* MetagameWeaponAsset, ESBZDifficulty Difficulty, const TArray<float>& OverrideWeights);
    
    UFUNCTION(BlueprintCallable)
    static ESBZWeaponRarity GenerateRarity(FRandomStream& InRandomStream, const UOTWDProfileSaveData* ProfileSaveData, const UOTWDMetagameWeaponDataAsset* MetagameWeaponAsset, ESBZDifficulty Difficulty, const TArray<float>& OverrideWeights);
    
    UFUNCTION(BlueprintCallable)
    static int32 GeneratePowerLevel(FRandomStream& InRandomStream, UOTWDProfileSaveData* ProfileSaveData, const UOTWDMetagameWeaponDataAsset* MetagameWeaponAsset, float BasePowerLevel, ESBZWeaponRarity Rarity, ESBZDifficulty Difficulty, bool bApplyRarityPowerLevel, bool bApplyDifficultyPowerLevel, bool bLimitPowerLevelByRarity);
    
    UFUNCTION(BlueprintCallable)
    static TArray<USBZWeaponPartSlot*> GenerateModdableSlots(FRandomStream& InRandomStream, const USBZWeaponData* WeaponData, int32 MinModdableSlots, int32 MaxModdableSlots, ESBZWeaponRarity Rarity, const TMap<USBZWeaponPartSlot*, float>& WeaponPartSlotWeights);
    
};

