#pragma once
#include "CoreMinimal.h"
#include "EEncounterPhase.h"
#include "EncounterPhaseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEncounterPhaseDelegate, EEncounterPhase, Phase);

