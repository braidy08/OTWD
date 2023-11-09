#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorActionType.h"
#include "SBZDoorActionSounds.h"
#include "SBZSchematic.h"
#include "SBZDoorSoundCollectionSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZDoorSoundCollectionSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDoorActionType, FSBZDoorActionSounds> SoundMap;
    
public:
    USBZDoorSoundCollectionSchematic();
};

