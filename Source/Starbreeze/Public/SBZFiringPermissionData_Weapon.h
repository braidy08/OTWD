#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZFiringPermissionData_Weapon.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZFiringPermissionData_Weapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumOfTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolDownTime;
    
    FSBZFiringPermissionData_Weapon();
};

