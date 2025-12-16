#pragma once
#include "CoreMinimal.h"
#include "WeightedEncounterSpawn.generated.h"

class ASBZSpawnerBase;
class USBZEncounterGroupSchematic;

USTRUCT(BlueprintType)
struct FWeightedEncounterSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZSpawnerBase* Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZEncounterGroupSchematic* EncounterGroup;
    
    STARBREEZE_API FWeightedEncounterSpawn();
};

