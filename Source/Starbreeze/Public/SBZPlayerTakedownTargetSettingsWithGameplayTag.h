#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZPlayerTakedownTargetSettings.h"
#include "SBZPlayerTakedownTargetSettingsWithGameplayTag.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerTakedownTargetSettingsWithGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> PlayerGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZPlayerTakedownTargetSettings> Settings;
    
    FSBZPlayerTakedownTargetSettingsWithGameplayTag();
};

