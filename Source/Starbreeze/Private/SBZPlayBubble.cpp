#include "SBZPlayBubble.h"

void ASBZPlayBubble::StartDisallowTimer(float Time, bool bAddWarningTime) {
}

void ASBZPlayBubble::SetCheckpointsAndDisallowPlayBubble(const TArray<ASBZCheckpoint*>& Checkpoints, float Timer, bool bAddDefaultWarningTime) {
}

void ASBZPlayBubble::SetAllowed() {
}

void ASBZPlayBubble::OnPlayerRemoved(UObject* Obj) {
}

void ASBZPlayBubble::OnNewAlivePlayer(UObject* Obj) {
}

void ASBZPlayBubble::OnExited(AActor* OverlappedActor, AActor* OtherActor) {
}

void ASBZPlayBubble::OnEntered(AActor* OverlappedActor, AActor* OtherActor) {
}

ASBZPlayBubble::ASBZPlayBubble() {
    this->PlayersAllowedState = ESBZBubbleStatePlayers::Allowed;
}

