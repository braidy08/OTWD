#pragma once
#include "CoreMinimal.h"
#include "SBZOldObjectiveState.generated.h"

class USBZObjectiveSchematic;

USTRUCT(BlueprintType)
struct FSBZOldObjectiveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZObjectiveSchematic* Schematic;
    
    STARBREEZE_API FSBZOldObjectiveState();
};

