#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDHitDoorSoundSchematic.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class OTWD_API UOTWDHitDoorSoundSchematic : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FallbackHitSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistFromDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistFromPlayers;
    
    UOTWDHitDoorSoundSchematic();
};

