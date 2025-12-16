#include "OTWDZombieVoiceComponent.h"

UOTWDZombieVoiceComponent::UOTWDZombieVoiceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoopEvent = NULL;
    this->PauseEvent = NULL;
    this->StartSyncActionEventFP = NULL;
    this->StopSyncActionEventFP = NULL;
    this->LoopEventSwitchGroup = TEXT("walker_loop");
}

void UOTWDZombieVoiceComponent::OnAlertnessChanged(USBZAlertnessComponent* Sender, FSBZAlertnessLevelIdHelper NewLevel, FSBZAlertnessLevelIdHelper OldLevel) {
}


