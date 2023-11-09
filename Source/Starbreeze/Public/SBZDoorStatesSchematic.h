#pragma once
#include "CoreMinimal.h"
#include "SBZDoorState.h"
#include "SBZSchematic.h"
#include "SBZDoorStatesSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZDoorStatesSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZDoorState> States;
    
    USBZDoorStatesSchematic();
};

