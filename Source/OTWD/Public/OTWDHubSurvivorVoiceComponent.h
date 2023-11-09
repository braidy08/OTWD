#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AkEventDurationSignatureDelegate.h"
#include "AkEventEndSignatureDelegate.h"
#include "OTWDHubSurvivorVoiceComponent.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDHubSurvivorVoiceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkEventDurationSignature OnAKEventDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkEventEndSignature OnAKEventEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponentVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VoiceAttachPoint;
    
    UOTWDHubSurvivorVoiceComponent();
    UFUNCTION(BlueprintCallable)
    void Say(UAkAudioEvent* AudioEvent);
    
};

