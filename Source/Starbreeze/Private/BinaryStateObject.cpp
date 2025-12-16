#include "BinaryStateObject.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ABinaryStateObject::ABinaryStateObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->bState = false;
}

void ABinaryStateObject::SetState(bool bInState) {
}

void ABinaryStateObject::OnRep_State() {
}

bool ABinaryStateObject::GetState() const {
    return false;
}

void ABinaryStateObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABinaryStateObject, bState);
}


