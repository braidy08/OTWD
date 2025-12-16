#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ESBZWeaponRarity.h"
#include "OTWDBlackmarketProgressSettings.h"
#include "OTWDCampVendorSettings.generated.h"

class UOTWDVendorInventoryCollection;
class UOTWDWeaponStashCollection;
class USBZWeaponPartSlot;

UCLASS(Blueprintable, DefaultConfig, Config=OTWD)
class OTWD_API UOTWDCampVendorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOTWDVendorInventoryCollection> VendorInventoryCollection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOTWDWeaponStashCollection> WeaponStashCollection;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDBlackmarketProgressSettings BlackmarketProgress[7];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponRarity BlackmarketStartRarity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponRarity BlackmarketRarityCap;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlackmarketWeaponProgressAmount[7];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlackmarkeGoldProgressAmount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlackmarkeMetaTurnsUntilItemsCollectable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USBZWeaponPartSlot*, float> VendorWeaponPartSlotWeights;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USBZWeaponPartSlot*, float> BlackmarketWeaponPartSlotWeights;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOTWDVendorInventoryCollection* CachedVendorDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOTWDWeaponStashCollection* CachedWeaponStashDataAsset;
    
public:
    UOTWDCampVendorSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UOTWDWeaponStashCollection* GetWeaponStashCollection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UOTWDVendorInventoryCollection* GetVendorInventoryCollection();
    
};

