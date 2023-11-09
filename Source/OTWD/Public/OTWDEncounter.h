#pragma once
#include "CoreMinimal.h"
#include "SBZEncounter.h"
#include "OTWDEncounter.generated.h"

class ASBZAICharacter;
class UOTWDEncounterSheetSchematic;
class USBZBaseSpawnBehaviour;

UCLASS(Abstract, Blueprintable)
class OTWD_API AOTWDEncounter : public ASBZEncounter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDEncounterSheetSchematic* DifficultySheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseSpawnBehaviour* CrowdActorSpawnBehaviour;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZAICharacter*> CrowdCharacters;
    
public:
    AOTWDEncounter();
};

