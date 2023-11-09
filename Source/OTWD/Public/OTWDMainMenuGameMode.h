#pragma once
#include "CoreMinimal.h"
#include "OTWDMission.h"
#include "OTWDMainMenuGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDMainMenuGameMode : public AOTWDMission {
    GENERATED_BODY()
public:
    AOTWDMainMenuGameMode();
};

