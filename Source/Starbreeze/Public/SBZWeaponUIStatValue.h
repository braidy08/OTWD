#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponUIStatAttribute.h"
#include "SBZWeaponUIStatValue.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZWeaponUIStatValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BaseValues;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponUIStatAttribute> Attributes;
    
    FSBZWeaponUIStatValue();
};

