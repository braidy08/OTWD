#include "SBZPlayBubble.h"
#include "Components/SceneComponent.h"

ASBZPlayBubble::ASBZPlayBubble(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->PlayersAllowedState = ESBZBubbleStatePlayers::Allowed;
}

void ASBZPlayBubble::StartDisallowTimer(float Time, bool bAddWarningTime, bool bResetActiveTimer) {
}

void ASBZPlayBubble::SetCheckpointsAndDisallowPlayBubble(const TArray<ASBZCheckpoint*>& Checkpoints, float Timer, bool bAddDefaultWarningTime, bool bResetActiveTimer) {
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


