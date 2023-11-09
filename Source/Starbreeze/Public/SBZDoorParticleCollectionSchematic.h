#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorActionType.h"
#include "SBZDoorActionParticles.h"
#include "SBZSchematic.h"
#include "SBZDoorParticleCollectionSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZDoorParticleCollectionSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDoorActionType, FSBZDoorActionParticles> ParticleMap;
    
public:
    USBZDoorParticleCollectionSchematic();
};

