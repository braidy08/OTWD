#pragma once
#include "CoreMinimal.h"
#include "SBZAmmoPickupsData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSBZAmmoPickupsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SoundEvent;
    
    STARBREEZE_API FSBZAmmoPickupsData();
};

