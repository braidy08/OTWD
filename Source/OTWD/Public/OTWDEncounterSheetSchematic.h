#pragma once
#include "CoreMinimal.h"
#include "ESBZDifficulty.h"
#include "SBZSchematic.h"
#include "OTWDEncounterSheetSchematic.generated.h"

class USBZEncounterTableSchematic;

UCLASS(Blueprintable)
class OTWD_API UOTWDEncounterSheetSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, USBZEncounterTableSchematic*> MappedDifficulties;
    
    UOTWDEncounterSheetSchematic();
};

