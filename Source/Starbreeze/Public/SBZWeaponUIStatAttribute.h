#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "AttributeSet.h"
#include "ESBZWeaponUIStatValue.h"
#include "SBZWeaponUIStatAttribute.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZWeaponUIStatAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGameplayModOp::Type> AttributeOp;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponUIStatValue ValueOp;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttributeScalar;
    
    FSBZWeaponUIStatAttribute();
};

