#pragma once
#include "CoreMinimal.h"
#include "SBZEncounterPhaseSpawnPoolRule.h"
#include "SBZEncounterPhaseBossSpawnPoolRule.generated.h"

class USBZAICharacterSchematic;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZEncounterPhaseBossSpawnPoolRule : public USBZEncounterPhaseSpawnPoolRule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckAllBossSpawnPools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZAICharacterSchematic*> BossCharactersToCheck;
    
public:
    USBZEncounterPhaseBossSpawnPoolRule();
};

