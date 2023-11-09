#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponDecal.generated.h"

class USBZWeaponDecalConfig;

USTRUCT(BlueprintType)
struct FSBZWeaponDecal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponDecalConfig* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentFadeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCheckAllowed;
    
    STARBREEZE_API FSBZWeaponDecal();
};

