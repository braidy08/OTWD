#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZWeaponAttributeUIStatSingle.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZWeaponAttributeUIStatSingle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FSBZWeaponAttributeUIStatSingle();
};

