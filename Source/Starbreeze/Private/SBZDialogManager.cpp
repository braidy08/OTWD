#include "SBZDialogManager.h"

void ASBZDialogManager::PlayLine(AActor* Performer, UAkAudioEvent* AudioEvent, const FString& CommentState) {
}

ESBZPlayDialogResult ASBZDialogManager::PlayDialogByName(FName DialogID, const TArray<AActor*>& Performers, const FBPOnDialogEnded_Delegate& OnDialogEnded, AActor* DialogInstigator) {
    return ESBZPlayDialogResult::Successful;
}

void ASBZDialogManager::Multicast_PlayDialogByName_Implementation(FName DialogID, const TArray<AActor*>& Performers, AActor* DialogInstigator) {
}

ASBZNarrator* ASBZDialogManager::GetNarrator() {
    return NULL;
}

ASBZDialogManager* ASBZDialogManager::GetDialogManager(UObject* WorldContextObject) {
    return NULL;
}

ASBZDialogManager::ASBZDialogManager() {
    this->AISmallTalkClass = NULL;
    this->Narrator = NULL;
    this->AISmallTalk = NULL;
}

