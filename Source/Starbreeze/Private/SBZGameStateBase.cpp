#include "SBZGameStateBase.h"
#include "Net/UnrealNetwork.h"

ASBZGameStateBase::ASBZGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ElapsedTime = 0;
    this->StatsDummyWeapon = NULL;
}

void ASBZGameStateBase::OnRep_ElapsedTime() {
}

void ASBZGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZGameStateBase, ElapsedTime);
}


