#include "SBZThrowableProjectilePicker.h"
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZOutlineComponent.h"

ASBZThrowableProjectilePicker::ASBZThrowableProjectilePicker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->InteractionCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("InteractionCapsule"));
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("OulineComponent"));
    this->InteractionCapsuleComponent->SetupAttachment(RootComponent);
}

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


