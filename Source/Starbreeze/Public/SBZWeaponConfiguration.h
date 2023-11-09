#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponCondition.h"
#include "ESBZWeaponRarity.h"
#include "SBZWeaponConfigurationPartSlot.h"
#include "Templates/SubclassOf.h"
#include "SBZWeaponConfiguration.generated.h"

class ASBZWeapon;
class USBZMaterialReplacements;
class USBZWeaponData;
class USBZWeaponPartSchematic;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZWeaponConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZWeapon> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponData* WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMaterialReplacements* MaterialReplacements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponConfigurationPartSlot> WeaponParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponPartSchematic*> AdditionalDefaultParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponRarity Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponCondition Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerLevel;
    
    FSBZWeaponConfiguration();
};

