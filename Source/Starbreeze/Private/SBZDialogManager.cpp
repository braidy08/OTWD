#include "SBZDialogManager.h"

USBZDialogManager::USBZDialogManager() {
    this->AISmallTalkClass = NULL;
    this->Narrator = NULL;
    this->AISmallTalk = NULL;
}

void USBZDialogManager::PlayLine(AActor* Performer, UAkAudioEvent* AudioEvent, const FString& CommentState) {
}

ESBZPlayDialogResult USBZDialogManager::PlayDialogByName(FName DialogID, const TArray<AActor*>& Performers, const FBPOnDialogEnded_Delegate& OnDialogEnded, AActor* DialogInstigator) {
    return ESBZPlayDialogResult::Successful;
}

void USBZDialogManager::Multicast_PlayDialogByName_Implementation(FName DialogID, const TArray<AActor*>& Performers, AActor* DialogInstigator) {
}

ASBZNarrator* USBZDialogManager::GetNarrator() {
    return NULL;
}

USBZDialogManager* USBZDialogManager::GetDialogManager(UObject* WorldContextObject) {
    return NULL;
}


