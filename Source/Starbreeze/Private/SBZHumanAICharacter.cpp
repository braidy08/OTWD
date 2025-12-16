#include "SBZHumanAICharacter.h"
#include "Net/UnrealNetwork.h"
#include "SBZCharacterMVComponent.h"
#include "SBZCharacterMovementComponent.h"
#include "SBZHumanAIAttributeSet.h"

ASBZHumanAICharacter::ASBZHumanAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USBZCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->Tags.AddDefaulted(1);
    this->ExplosionLineTraceBones.AddDefaulted(6);
    this->MantlingVaultingComponent = CreateDefaultSubobject<USBZCharacterMVComponent>(TEXT("MantlingVaultingComponent"));
    this->MigrationFlags = 0;
    this->HashedSpawnerName = 0;
    this->HashedAISchematic = 0;
    this->LastSelectedCoverWorldYaw = 0;
    this->LastAIVelocity2D = 0;
    this->bHasCoverSelected = false;
    this->bCanEverTurnOnFlashLight = false;
    this->HumanAIAttributeSet = CreateDefaultSubobject<USBZHumanAIAttributeSet>(TEXT("SBZHumanAIAttributeSet"));
    this->CurrentPackedAlertnessValue = 0;
    this->CachedSBZHumanAICharAnim = NULL;
    this->FlashlightGadget = NULL;
}

void ASBZHumanAICharacter::OrderMoveToLocation(const FVector& Location, float AcceptRadius) {
}

void ASBZHumanAICharacter::OnRep_CurrentPackedAlertnessValue() {
}

void ASBZHumanAICharacter::OnLeaveAlertnessState(FSBZAlertnessLevelIdHelper LeaveLevel) {
}

void ASBZHumanAICharacter::OnEnterAlertnessState(FSBZAlertnessLevelIdHelper EnterLevel) {
}

void ASBZHumanAICharacter::OnCurrentAlertnessValueChanged(float AlertnessValue) {
}

void ASBZHumanAICharacter::NetMulticast_TryPlayTransition_Implementation(ESBZHumanAICharacterTransition Transition, uint16 Dir) {
}

void ASBZHumanAICharacter::NetMulticast_SetInCover_Implementation(bool bEnable) {
}

void ASBZHumanAICharacter::NetMulticast_InterruptCoverPeekMontage_Implementation() {
}

void ASBZHumanAICharacter::NetMulticast_CoverPeekUpLow_Implementation(bool bEnable) {
}

void ASBZHumanAICharacter::NetMulticast_CoverPeekUp_Implementation(bool bEnable) {
}

void ASBZHumanAICharacter::NetMulticast_CoverPeekRight_Implementation(bool bEnable, bool bExitingCover) {
}

void ASBZHumanAICharacter::NetMulticast_CoverPeekLeft_Implementation(bool bEnable, bool bExitingCover) {
}

ASBZHardPoint* ASBZHumanAICharacter::GetHardPoint() const {
    return NULL;
}

void ASBZHumanAICharacter::DisbandFromAssaultGroup() {
}

void ASBZHumanAICharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZHumanAICharacter, MigrationFlags);
    DOREPLIFETIME(ASBZHumanAICharacter, HashedSpawnerName);
    DOREPLIFETIME(ASBZHumanAICharacter, HashedAISchematic);
    DOREPLIFETIME(ASBZHumanAICharacter, LastSelectedCoverWorldYaw);
    DOREPLIFETIME(ASBZHumanAICharacter, bHasCoverSelected);
    DOREPLIFETIME(ASBZHumanAICharacter, CurrentPackedAlertnessValue);
}


