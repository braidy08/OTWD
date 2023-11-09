#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponSwayRotatorSchematic.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponSwayRotatorSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Roll;
    
    STARBREEZE_API FSBZWeaponSwayRotatorSchematic();
};

