#pragma once
#include "CoreMinimal.h"
#include "OTWDBuildingBonusInfo.generated.h"

class UOTWDAbilityTechSchematic;

USTRUCT(BlueprintType)
struct FOTWDBuildingBonusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LevelBonusDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> DisplayFormattingArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOTWDAbilityTechSchematic> UnlockedAbility;
    
    OTWD_API FOTWDBuildingBonusInfo();
};

