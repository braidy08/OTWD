#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZMissionCompletionRewards.generated.h"

UCLASS(Abstract, Blueprintable, Const)
class STARBREEZE_API USBZMissionCompletionRewards : public UDataAsset {
    GENERATED_BODY()
public:
    USBZMissionCompletionRewards();
};

