#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "SBZMissionCompletionRewards.h"
#include "OTWDMetagameCurrency.h"
#include "OTWDMetagameCurrencyRewards.h"
#include "OTWDMetagameFloatCurrency.h"
#include "OTWDMissionRewardCollection.h"
#include "OTWDPotentialMissionCompletionRewardData.h"
#include "OTWDMissionRewards.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDMissionRewards : public USBZMissionCompletionRewards {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDPotentialMissionCompletionRewardData PotentialRewards[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDMissionRewardCollection> MissionRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMetagameCurrencyRewards Currency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMetagameFloatCurrency ExcessResourcesGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMetagameCurrency BonusObjectiveResourceGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusObjectiveExperienceGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExperienceModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> CampCurrencyDifficultyRewardModifier;
    
    UOTWDMissionRewards();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOTWDPotentialMissionCompletionRewardData GetPotentialRewardsAt(ESBZDifficulty Difficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOTWDMetagameCurrency GetMaximumCurrencyRewards() const;
    
};

