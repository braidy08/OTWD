#include "BinaryStateObject.h"
#include "Net/UnrealNetwork.h"

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

ABinaryStateObject::ABinaryStateObject() {
    this->bState = false;
}

