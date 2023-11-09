#pragma once
#include "CoreMinimal.h"
#include "ESBZAmmoContainerType.h"
#include "ESBZWeaponSlotType.h"
#include "SBZAmmoLootTypes.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAmmoLootTypes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponSlotType WeaponSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAmmoContainerType AmmoContainerType;
    
    FSBZAmmoLootTypes();
};

