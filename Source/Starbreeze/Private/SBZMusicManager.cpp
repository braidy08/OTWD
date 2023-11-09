#include "SBZMusicManager.h"

void USBZMusicManager::StopMusic() {
}

void USBZMusicManager::SetVolume(float NewVolume) {
}

void USBZMusicManager::SetSwitch(FName SwitchGroup, FName SwitchState) {
}

void USBZMusicManager::SetRTPCValue(FName RTPC, float RTPCValue) {
}

void USBZMusicManager::SetMuted(bool bInMuted) {
}

void USBZMusicManager::SetDefaultSwitches() {
}

void USBZMusicManager::PlayMusic(UAkAudioEvent* AudioEvent, bool bStopCurrent) {
}

void USBZMusicManager::PlayDefaultMusic(bool bStopCurrent) {
}

bool USBZMusicManager::IsMuted() const {
    return false;
}

USBZMusicManager* USBZMusicManager::GetMusicManager(UObject* WorldContextObject) {
    return NULL;
}

USBZMusicManager::USBZMusicManager() {
    this->VolumeRTPC = TEXT("global_music_volume");
    this->CurrentVolume = 1;
    this->DefaultMusic = NULL;
}

