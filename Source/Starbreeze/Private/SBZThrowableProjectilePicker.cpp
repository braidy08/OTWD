#include "SBZThrowableProjectilePicker.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZOutlineComponent.h"

void ASBZThrowableProjectilePicker::Server_OnPickup_Implementation(ASBZPlayerCharacter* Player) {
}
bool ASBZThrowableProjectilePicker::Server_OnPickup_Validate(ASBZPlayerCharacter* Player) {
    return true;
}

void ASBZThrowableProjectilePicker::OnRep_Guid() {
}

void ASBZThrowableProjectilePicker::OnProjectileDestroyed(AActor* InDestroyedProjectile) {
}

void ASBZThrowableProjectilePicker::OnBeginPickUpOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZThrowableProjectilePicker::NetMulticast_OnPickup_Implementation(ASBZPlayerCharacter* Player) {
}

void ASBZThrowableProjectilePicker::MatchProjectile(const ASBZThrowableProjectile* InProjectile) {
}

void ASBZThrowableProjectilePicker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZThrowableProjectilePicker, ProjectileGuid);
}

ASBZThrowableProjectilePicker::ASBZThrowableProjectilePicker() {
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->InteractionCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("InteractionCapsule"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("OulineComponent"));
}

