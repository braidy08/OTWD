#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponPartDataRewardInfo.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZWeaponPartDataRewardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropWeight;
    
    FSBZWeaponPartDataRewardInfo();
};

