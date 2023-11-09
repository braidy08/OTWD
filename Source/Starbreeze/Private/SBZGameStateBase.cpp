#include "SBZGameStateBase.h"
#include "Net/UnrealNetwork.h"

void ASBZGameStateBase::OnRep_ElapsedTime() {
}

void ASBZGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZGameStateBase, ElapsedTime);
}

ASBZGameStateBase::ASBZGameStateBase() {
    this->ElapsedTime = 0;
    this->StatsDummyWeapon = NULL;
}

