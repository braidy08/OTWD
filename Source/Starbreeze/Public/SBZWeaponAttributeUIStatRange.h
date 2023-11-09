#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZWeaponAttributeUIStatRange.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZWeaponAttributeUIStatRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stats[6];
    
    FSBZWeaponAttributeUIStatRange();
};

