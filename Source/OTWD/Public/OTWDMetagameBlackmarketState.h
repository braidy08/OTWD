#pragma once
#include "CoreMinimal.h"
#include "EOTWDPlayFabWandererStatus.h"
#include "OTWDMetagameBlackmarketItem.h"
#include "OTWDVendorWeapon.h"
#include "OTWDVendorWeaponPart.h"
#include "OTWDMetagameBlackmarketState.generated.h"

USTRUCT(BlueprintType)
struct FOTWDMetagameBlackmarketState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDMetagameBlackmarketItem> ActiveProgressionItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDVendorWeapon> GeneratedWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDVendorWeaponPart> GeneratedWeaponParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOTWDPlayFabWandererStatus WandererStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TurnsUntilCollectable;
    
    OTWD_API FOTWDMetagameBlackmarketState();
};

