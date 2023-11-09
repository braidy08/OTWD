#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponRarity.h"
#include "OTWDMetagameBlackmarketItem.generated.h"

class USBZUnlockable;

USTRUCT(BlueprintType)
struct FOTWDMetagameBlackmarketItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUnlockable* ItemDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponRarity CurrentRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentProgress;
    
    OTWD_API FOTWDMetagameBlackmarketItem();
};

