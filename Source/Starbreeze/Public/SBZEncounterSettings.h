#pragma once
#include "CoreMinimal.h"
#include "SBZEncounterSettings.generated.h"

class USBZEncounterPhase;
class USBZEncounterTableSchematic;

USTRUCT(BlueprintType)
struct FSBZEncounterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEncounterTableSchematic* CharacterTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZEncounterPhase*> Phases;
    
    STARBREEZE_API FSBZEncounterSettings();
};

