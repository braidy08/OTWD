#pragma once
#include "CoreMinimal.h"
#include "ESBZGrappleParticipantType.h"
#include "SBZGrappleStateAudioEvent.h"
#include "SBZGrappleStateChangeAudio.generated.h"

class ASBZAICharacter;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGrappleStateChangeAudio {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASBZAICharacter> OpponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZGrappleParticipantType OpponentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGrappleStateAudioEvent> Events;
    
    FSBZGrappleStateChangeAudio();
};

