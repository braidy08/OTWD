#pragma once
#include "CoreMinimal.h"
#include "OTWDWeaponPartRewardRarityOverride.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDWeaponPartRewardRarityOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float RarityWeight[7];
    
    FOTWDWeaponPartRewardRarityOverride();
};

