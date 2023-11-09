#pragma once
#include "CoreMinimal.h"
#include "ESBZSpawnSignificance.h"
#include "SBZPawnTypeRequest.generated.h"

class ASBZSpawnerBase;
class USBZAICharacterSchematic;
class USBZBaseSpawnBehaviour;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPawnTypeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAICharacterSchematic* PawnTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ASBZSpawnerBase> Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseSpawnBehaviour* Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSpawnSignificance Significance;
    
    FSBZPawnTypeRequest();
};

