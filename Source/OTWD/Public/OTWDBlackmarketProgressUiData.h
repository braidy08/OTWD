#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponRarity.h"
#include "OTWDBlackmarketProgressUiData.generated.h"

USTRUCT(BlueprintType)
struct FOTWDBlackmarketProgressUiData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponRarity Rarity;
    
    OTWD_API FOTWDBlackmarketProgressUiData();
};

