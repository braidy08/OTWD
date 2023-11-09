#include "SBZAmbientSoundWithVFX.h"

void ASBZAmbientSoundWithVFX::StartEmitter() {
}

void ASBZAmbientSoundWithVFX::OnParticleSpawned(FName InEventName, float InEmitterTime, FVector InLocation, FVector InVelocity) {
}

void ASBZAmbientSoundWithVFX::OnParticleDied(FName InEventName, float InEmitterTime, int32 InParticleTime, FVector InLocation, FVector InVelocity, FVector InDirection) {
}

void ASBZAmbientSoundWithVFX::OnParticleCollided(FName InEventName, float InEmitterTime, int32 InParticleTime, FVector InLocation, FVector InVelocity, FVector InDirection, FVector InNormal, FName BoneName, UPhysicalMaterial* InPhysMat) {
}

void ASBZAmbientSoundWithVFX::OnEffectDone(UParticleSystemComponent* InParticleSystemComponent) {
}

ASBZAmbientSoundWithVFX::ASBZAmbientSoundWithVFX() {
    this->AkAudioParticleSpawnEvent = NULL;
    this->AkAudioParticleCollideEvent = NULL;
    this->AkAudioParticleDeathEvent = NULL;
    this->bAttachSoundsAndEmitter = true;
    this->bTurnOffAmbientSoundOnParticleDeath = false;
    this->ParticleEmitterSpawnType = ESBZParticleEmitterSpawnType::SpawnOnBegin;
    this->StaticMesh = NULL;
    this->ParticleSystem = NULL;
    this->bSpawnEmitterOnBeginPlay = true;
    this->ParticleSystemComponent = NULL;
}

