#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponMinimumKickData.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponMinimumKickData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumYaw;
    
    STARBREEZE_API FSBZWeaponMinimumKickData();
};

