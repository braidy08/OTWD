#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponRarity.h"
#include "OTWDBlackmarketRarityChance.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDBlackmarketRarityChance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHaveGuaranteedRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponRarity GuaranteedRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GuaranteedPowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponRarity PossibleRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PossiblePowerLevel;
    
    FOTWDBlackmarketRarityChance();
};

