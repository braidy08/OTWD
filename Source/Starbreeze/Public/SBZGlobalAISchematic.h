#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "SBZGlobalAISchematic.generated.h"

class USBZAICharacterSchematic;
class USBZActAnimationSetSchematic;
class USBZBaseSpawnBehaviour;

UCLASS(Blueprintable)
class STARBREEZE_API USBZGlobalAISchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZAICharacterSchematic*> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZActAnimationSetSchematic*> ActAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBaseSpawnBehaviour* DefaultSpawnBehaviour;
    
    USBZGlobalAISchematic();
};

