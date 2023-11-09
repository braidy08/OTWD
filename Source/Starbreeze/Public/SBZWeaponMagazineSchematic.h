#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponMagazineReloadMode.h"
#include "SBZMinMaxAmountAmmo.h"
#include "SBZWeaponMagazineSchematic.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponMagazineSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponMagazineReloadMode ReloadMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 AmmoLoadedPerReload;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 AmmoInventoryInitial;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 AmmoInventoryMax;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 AmmoLoadedInitial;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 AmmoLoadedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMinMaxAmountAmmo SmallAmmoPickupAmounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMinMaxAmountAmmo MediumAmmoPickupAmounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZMinMaxAmountAmmo LargeAmmoPickupAmounts;
    
    STARBREEZE_API FSBZWeaponMagazineSchematic();
};

