#pragma once
#include "CoreMinimal.h"
#include "EOTWDGamePart.generated.h"

UENUM(BlueprintType)
enum class EOTWDGamePart : uint8 {
    EMainMenu,
    EActionPhase,
    EMainMenuLibrary,
    EMainMenuCampUpgrades,
    EMainMenuSurvivors,
    EMainMenuResultScreen,
    EAlwaysLoaded,
};

