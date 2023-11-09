#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponFamily.h"
#include "SBZUnlockable.h"
#include "SBZWeaponAttributeUIStatRange.h"
#include "SBZWeaponAttributeUIStatSingle.h"
#include "SBZWeaponDataRewardInfo.h"
#include "SBZWeaponSlotConfiguration.h"
#include "SBZWeaponData.generated.h"

class ASBZWeapon;
class USBZWeaponManufacturer;
class USBZWeaponPartSchematic;
class USBZWeaponPartSlot;
class UTexture2D;

UCLASS(Blueprintable, Const)
class STARBREEZE_API USBZWeaponData : public USBZUnlockable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AdditionalInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> WeaponThumbnail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponManufacturer* Manufacturer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponFamily Family;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASBZWeapon> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RestrictedWeaponSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USBZWeaponPartSlot*, FSBZWeaponSlotConfiguration> ModularConfiguration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponDataRewardInfo RewardInfo[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerRangeMaximum0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponAttributeUIStatRange> PowerRangeUIData0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponAttributeUIStatSingle> StaticUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponAttributeUIStatRange> OverridePowerRangeUIData0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponAttributeUIStatSingle> OverrideStaticUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> AdditionalUIStatsValues;
    
    USBZWeaponData();
    UFUNCTION(BlueprintCallable)
    void RefreshDataFromBlueprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZWeaponPartSlot* GetSlotMatchingWeaponPart(USBZWeaponPartSchematic* WeaponPartSchematic) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USBZWeaponPartSlot*> GetModdableSlots() const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateUIData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FSBZWeaponAttributeUIStatSingle> EvalUIData(int32 PowerLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeAssignedToSlot(int32 Slot) const;
    
};

