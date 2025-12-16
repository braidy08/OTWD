#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZAlertnessLevelIdHelper -FallbackName=SBZAlertnessLevelIdHelper
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZCharacterVoiceComponent -FallbackName=SBZCharacterVoiceComponent
#include "OTWDZombieVoiceComponent.generated.h"

class UAkAudioEvent;
class USBZAlertnessComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDZombieVoiceComponent : public USBZCharacterVoiceComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PauseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartSyncActionEventFP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopSyncActionEventFP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoopEventSwitchGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> LoopEventSwitchStates;
    
    UOTWDZombieVoiceComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnAlertnessChanged(USBZAlertnessComponent* Sender, FSBZAlertnessLevelIdHelper NewLevel, FSBZAlertnessLevelIdHelper OldLevel);
    
};

