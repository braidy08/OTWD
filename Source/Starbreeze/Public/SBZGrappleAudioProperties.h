#pragma once
#include "CoreMinimal.h"
#include "SBZGrappleStateChangeAudio.h"
#include "SBZGrappleAudioProperties.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGrappleAudioProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGrappleStateChangeAudio> StateChangeEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EndPlayAkEvent;
    
    FSBZGrappleAudioProperties();
};

