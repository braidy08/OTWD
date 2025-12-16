#include "SBZWorldSettings.h"
#include "Components/SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=MediaSoundComponent -FallbackName=MediaSoundComponent

ASBZWorldSettings::ASBZWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->bUseOverrideMissionSeed = false;
    this->OverrideMissionSeed = 0;
    this->bPerformGeneration = true;
    this->MusicEvent = NULL;
    this->TimeOfDay = ESBZTimeOfDay::Day;
    this->bHasMusic = true;
    this->RuntimeVisibilityData = NULL;
    this->MasterMediaSoundComponent = CreateDefaultSubobject<UMediaSoundComponent>(TEXT("MediaSoundComponent"));
}

USBZRuntimeVisibilityData* ASBZWorldSettings::GetRuntimeVisibilityData() const {
    return NULL;
}

UMediaSoundComponent* ASBZWorldSettings::GetMasterMediaSoundComponent() const {
    return NULL;
}

FString ASBZWorldSettings::GetDebugMissionSeedAsString() {
    return TEXT("");
}


