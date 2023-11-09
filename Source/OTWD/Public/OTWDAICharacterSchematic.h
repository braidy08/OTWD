#pragma once
#include "CoreMinimal.h"
#include "SBZAICharacterSchematic.h"
#include "Templates/SubclassOf.h"
#include "ZombieSpawnWoundData.h"
#include "OTWDAICharacterSchematic.generated.h"

class APawn;
class USBZActSpawnBehaviour;

UCLASS(Blueprintable)
class OTWD_API UOTWDAICharacterSchematic : public USBZAICharacterSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSpawnAsCrowd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FZombieSpawnWoundData SpawnWoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZActSpawnBehaviour*> SpawnBehaviorVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<APawn>> MaleCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<APawn>> FemaleCharacters;
    
    UOTWDAICharacterSchematic();
};

