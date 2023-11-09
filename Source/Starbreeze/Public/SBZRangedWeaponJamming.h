#pragma once
#include "CoreMinimal.h"
#include "SBZJamConfig.h"
#include "SBZRangedWeaponJamming.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZRangedWeaponJamming {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZJamConfig> Configs;
    
    FSBZRangedWeaponJamming();
};

