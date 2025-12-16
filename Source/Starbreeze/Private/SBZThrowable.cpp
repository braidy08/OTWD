#include "SBZThrowable.h"
#include "Components/StaticMeshComponent.h"

ASBZThrowable::ASBZThrowable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicateMovement = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh = (UStaticMeshComponent*)RootComponent;
}

void ASBZThrowable::Throw(const FVector& Direction, float Strength) {
}



