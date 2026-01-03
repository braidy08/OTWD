#include "SBZThrowableProjectile.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "SBZProjectileMovementComponent.h"

ASBZThrowableProjectile::ASBZThrowableProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionCapsule"));
    this->ProjectileMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ProjectileMesh"));
    this->TrailParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("TrailParticleComp"));
    this->ProjectileMovementComp = CreateDefaultSubobject<USBZProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->CurrentState = EThrowableProjectileState::Idle;
}

void ASBZThrowableProjectile::Throw(float ThrowForce, USBZProjectileSchematic* InProjectileSchematic, const FVector& StartPosition, const FVector& Direction, APawn* InInstigator, AActor* InDamageCauser, const FRadialDamageParams& InDamageParams, USkeletalMesh* OverrideMesh) {
}

void ASBZThrowableProjectile::ShowProjectile() {
}

void ASBZThrowableProjectile::SetState(EThrowableProjectileState InCurrentState) {
}

void ASBZThrowableProjectile::SetMesh(USkeletalMesh* InMesh) {
}

void ASBZThrowableProjectile::SetMaxSpeedModifier(float InMaxSpeedModifier) {
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


