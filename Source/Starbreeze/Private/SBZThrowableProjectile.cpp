#include "SBZThrowableProjectile.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "SBZProjectileMovementComponent.h"

void ASBZThrowableProjectile::ShowProjectile() {
}

void ASBZThrowableProjectile::SetState(EThrowableProjectileState InCurrentState) {
}

void ASBZThrowableProjectile::SetMesh(USkeletalMesh* InMesh) {
}

void ASBZThrowableProjectile::SetMaxSpeedModifier(float InMaxSpeedModifier) {
}

void ASBZThrowableProjectile::SetGuid(FGuid InGuid) {
}

void ASBZThrowableProjectile::SetGravityScaleModifier(float InGravityScaleModifier) {
}

void ASBZThrowableProjectile::OnCharacterLimbDetached(ASBZCharacter* Actor, const FName& InBoneToDetachAt, const FVector& Impulse) {
}

void ASBZThrowableProjectile::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZThrowableProjectile::OnAttachedToActorDestroyed(AActor* Actor) {
}

USBZThrowableProjectileSchematic* ASBZThrowableProjectile::GetThrowableProjectileSchematic() const {
    return NULL;
}

EThrowableProjectileState ASBZThrowableProjectile::GetState() const {
    return EThrowableProjectileState::Idle;
}

float ASBZThrowableProjectile::GetPenetrationDist(float InSpeed) {
    return 0.0f;
}

FGuid ASBZThrowableProjectile::GetGuid() const {
    return FGuid{};
}

ASBZThrowableProjectile::ASBZThrowableProjectile() {
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionCapsule"));
    this->ProjectileMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ProjectileMesh"));
    this->TrailParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailParticleComp"));
    this->ProjectileMovementComp = CreateDefaultSubobject<USBZProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->CurrentState = EThrowableProjectileState::Idle;
    this->ProjectileSchematic = NULL;
    this->bDestroyProjectileOnHit = true;
    this->ThrowAudioEvent = NULL;
}

