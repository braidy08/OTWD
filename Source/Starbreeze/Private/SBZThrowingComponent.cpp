#include "SBZThrowingComponent.h"
#include "Templates/SubclassOf.h"

void USBZThrowingComponent::ThrowActorNetMulticast_Implementation(const FSBZThrowActorData& ActorData, const FTransform& OwnerTransform) {
}

void USBZThrowingComponent::ThrowActor(AActor* ActorToThrow, FVector Direction, float ThrowForce, FVector ExtraVelocity) {
}

void USBZThrowingComponent::SpawnAndThrowThrowableProjectile(TSubclassOf<ASBZThrowableProjectile> ThrowableProjectileClass, const FVector& StartLocation, const FVector& Direction, float ThrowForce, const FRadialDamageParams& RadialDamage, const FGuid& Guid) {
}

void USBZThrowingComponent::SpawnAndThrowItem(const FSBZThrowItemData& ThrowData) {
}

void USBZThrowingComponent::SpawnAndThrowDefaultItem() {
}

void USBZThrowingComponent::Server_ThrowActor_Implementation(const FSBZThrowActorData& ActorData) {
}
bool USBZThrowingComponent::Server_ThrowActor_Validate(const FSBZThrowActorData& ActorData) {
    return true;
}

void USBZThrowingComponent::Server_SpawnAndThrowThrowableProjectile_Implementation(const FSBZThrowProjectileData& ThrowData) {
}
bool USBZThrowingComponent::Server_SpawnAndThrowThrowableProjectile_Validate(const FSBZThrowProjectileData& ThrowData) {
    return true;
}

void USBZThrowingComponent::Server_SpawnAndThrowItem_Implementation(const FSBZThrowItemData& ThrowData) {
}
bool USBZThrowingComponent::Server_SpawnAndThrowItem_Validate(const FSBZThrowItemData& ThrowData) {
    return true;
}

void USBZThrowingComponent::OnThrowItem_Implementation(const FSBZThrowItemData& ThrowData) {
}

void USBZThrowingComponent::NetMulticast_SpawnAndThrowThrowableProjectile_Implementation(const FSBZThrowProjectileData& ThrowData) {
}

FSBZThrowItemData USBZThrowingComponent::GetDefaultThrowData() {
    return FSBZThrowItemData{};
}

USBZThrowingComponent::USBZThrowingComponent() {
    this->DefaultThrowForce = 1;
    this->DefaultThrownItemClass = NULL;
    this->SpawnOffsetFromCamera = 1;
    this->CharacterMovementVelocityModifier = 1;
}

