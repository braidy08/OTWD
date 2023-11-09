#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "OTWDTwitchSpawnSchematic.generated.h"

class UParticleSystem;
class USBZAICharacterSchematic;
class USBZBaseSpawnBehaviour;

UCLASS(Blueprintable)
class UOTWDTwitchSpawnSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZAICharacterSchematic> ClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> SpawnParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseSpawnBehaviour* SpawnBehaviour;
    
    UOTWDTwitchSpawnSchematic();
};

