#pragma once
#include "CoreMinimal.h"
#include "SBZFiringPermissionData_Weapon.h"
#include "SBZFiringPermissionData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZFiringPermissionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumShootersPerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZFiringPermissionData_Weapon> Weapons;
    
    FSBZFiringPermissionData();
};

