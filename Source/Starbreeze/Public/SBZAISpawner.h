#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBZSpawnSignificance.h"
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
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GeneratedSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator GeneratedSpawnRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasGeneratedSpawnLocation;
    
public:
    ASBZAISpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    APawn* GetLastSpawnedPawn();
    
};

