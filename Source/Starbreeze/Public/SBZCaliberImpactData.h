#pragma once
#include "CoreMinimal.h"
#include "EWeaponCaliber.h"
#include "SBZBaseImpactData.h"
#include "SBZCaliberImpactData.generated.h"

USTRUCT(BlueprintType)
struct FSBZCaliberImpactData : public FSBZBaseImpactData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponCaliber Caliber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecalMultiplier;
    
    STARBREEZE_API FSBZCaliberImpactData();
};

