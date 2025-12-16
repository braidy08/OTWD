#include "SBZPlayerCameraManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessComponent -FallbackName=PostProcessComponent
#include "SBZDepthOfFieldComponent.h"
#include "SBZPlayerCameraFeedbackComponent.h"

ASBZPlayerCameraManager::ASBZPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->GrapplePostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("GrapplePostProcessComponent"));
    this->DepthOfFieldComponent = CreateDefaultSubobject<USBZDepthOfFieldComponent>(TEXT("DepthOfFieldComponent"));
    this->DefaultDepthOfFieldComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("DefaultDepthOfFieldComponent"));
    this->PlayerCameraFeedbackComponent = CreateDefaultSubobject<USBZPlayerCameraFeedbackComponent>(TEXT("PlayerCameraFeedbackComponent"));
    this->DefaultDOFMaxDistance = 1;
    this->LensEffectParent = NULL;
    this->ActiveCameraViewRestrictionId = 0;
}

UParticleSystemComponent* ASBZPlayerCameraManager::SpawnLensParticleEffect(UParticleSystem* ParticleSystem, float LifeTime) {
    return NULL;
}

void ASBZPlayerCameraManager::RemoveCameraViewRestriction(FSBZCameraViewRestriction& RestrictionSettings) {
}

USBZPlayerCameraFeedbackComponent* ASBZPlayerCameraManager::GetPlayerCameraFeedbackComponent() const {
    return NULL;
}

float ASBZPlayerCameraManager::GetCurrentVerticalTopFOV() {
    return 0.0f;
}

float ASBZPlayerCameraManager::GetCurrentVerticalFOV() {
    return 0.0f;
}

void ASBZPlayerCameraManager::AddOrUpdateCameraViewRestriction(FSBZCameraViewRestriction& RestrictionSettings) {
}


