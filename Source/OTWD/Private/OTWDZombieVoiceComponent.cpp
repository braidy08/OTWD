#include "OTWDZombieVoiceComponent.h"

void UOTWDZombieVoiceComponent::OnAlertnessChanged(USBZAlertnessComponent* Sender, FSBZAlertnessLevelIdHelper NewLevel, FSBZAlertnessLevelIdHelper OldLevel) {
}

UOTWDZombieVoiceComponent::UOTWDZombieVoiceComponent() {
    this->LoopEvent = NULL;
    this->PauseEvent = NULL;
    this->StartSyncActionEventFP = NULL;
    this->StopSyncActionEventFP = NULL;
    this->LoopEventSwitchGroup = TEXT("walker_loop");
}

