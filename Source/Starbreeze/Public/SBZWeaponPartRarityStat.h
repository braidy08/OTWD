#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponPartRarityStat.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZWeaponPartRarityStat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stats[7];
    
    FSBZWeaponPartRarityStat();
};

