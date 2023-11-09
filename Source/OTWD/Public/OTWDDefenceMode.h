#pragma once
#include "CoreMinimal.h"
#include "OTWDMission.h"
#include "OTWDDefenceMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDDefenceMode : public AOTWDMission {
    GENERATED_BODY()
public:
    AOTWDDefenceMode();
};

