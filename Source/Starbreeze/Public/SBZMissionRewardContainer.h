#pragma once
#include "CoreMinimal.h"
#include "SBZMissionReward.h"
#include "SBZMissionRewardContainer.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZMissionRewardContainer : public USBZMissionReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMissionReward*> Rewards;
    
    USBZMissionRewardContainer();
};

