#pragma once
#include "CoreMinimal.h"
#include "OTWDMission.h"
#include "OTWDHubGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDHubGameMode : public AOTWDMission {
    GENERATED_BODY()
public:
    AOTWDHubGameMode();
};

