#pragma once
#include "CoreMinimal.h"
#include "OTWDWeaponRewardRarityOverride.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDWeaponRewardRarityOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float RarityWeight[7];
    
    FOTWDWeaponRewardRarityOverride();
};

