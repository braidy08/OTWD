#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OTWDWeaponLootMetaByLevel.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDWeaponLootMetaByLevel : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasePowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RarityDropWeight_Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> RarityDropWeight_WeaponPart;
    
    FOTWDWeaponLootMetaByLevel();
};

