#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ESBZWeaponRarity.h"
#include "OTWDBlackmarketProgressSettings.h"
#include "OTWDCampVendorSettings.generated.h"

class UOTWDVendorInventoryCollection;
class USBZWeaponPartSlot;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=OTWD)
class OTWD_API UOTWDCampVendorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOTWDVendorInventoryCollection> VendorInventoryCollection;
    
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
    
public:
    UOTWDCampVendorSettings();
};

