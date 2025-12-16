#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=ESBZDifficulty -FallbackName=ESBZDifficulty
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

