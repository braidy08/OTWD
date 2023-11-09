#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponDataRewardInfo.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZWeaponDataRewardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinModdableSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxModdableSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropWeight;
    
    FSBZWeaponDataRewardInfo();
};

