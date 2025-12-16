#pragma once
#include "CoreMinimal.h"
#include "ESBZSpawnSignificance.h"
#include "SBZPawnSpawnData.generated.h"

class USBZAICharacterSchematic;
class USBZBaseSpawnBehaviour;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPawnSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAICharacterSchematic* CharacterSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoToSpawn;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseSpawnBehaviour* SpawnBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSpawnSignificance SpawnSignificance;
    
    FSBZPawnSpawnData();
};

