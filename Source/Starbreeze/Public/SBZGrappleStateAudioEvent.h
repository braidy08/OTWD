#pragma once
#include "CoreMinimal.h"
#include "ESBZGrappleState.h"
#include "ESBZVoiceComment.h"
#include "SBZGrappleStateAudioEvent.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGrappleStateAudioEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoiceComment VoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZGrappleState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayForLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayForNonLocalPlayer;
    
    FSBZGrappleStateAudioEvent();
};

