#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBZSpawnSignificance.h"
#include "ESpawnActivationType.h"
#include "SBZSpawnerBase.h"
#include "SBZAISpawner.generated.h"

class APawn;
class USBZAICharacterSchematic;
class USBZBaseSpawnBehaviour;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZAISpawner : public ASBZSpawnerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAICharacterSchematic* CharacterSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseSpawnBehaviour* SpawnBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSpawnSignificance SpawnSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnActivationType ActivationType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GeneratedSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator GeneratedSpawnRotation;
    
public:
    ASBZAISpawner();
    UFUNCTION(BlueprintCallable)
    APawn* GetLastSpawnedPawn();
    
};

