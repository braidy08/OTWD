#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDLevelUpData.h"
#include "OTWDMetagameCurrency.h"
#include "OTWDCharacterLevelsDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class OTWD_API UOTWDCharacterLevelsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExperienceBleedMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExperienceBleedMaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<float> DifficultyModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDLevelUpData> Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrestigeExperience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMetagameCurrency PrestigeCurrencyReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LevelDataTable;
    
    UOTWDCharacterLevelsDataAsset();
};

