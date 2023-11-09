#include "SBZVehicle.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZCameraExtension.h"
#include "SBZInteractableComponent.h"
#include "SBZVehicleDriverComponent.h"

void ASBZVehicle::SetInputEnabled(bool bEnable) {
}

void ASBZVehicle::Server_OnPreviousSeat_Implementation() {
}
bool ASBZVehicle::Server_OnPreviousSeat_Validate() {
    return true;
}

void ASBZVehicle::Server_OnNextSeat_Implementation() {
}
bool ASBZVehicle::Server_OnNextSeat_Validate() {
    return true;
}

void ASBZVehicle::Server_OnBoostReleased_Implementation() {
}
bool ASBZVehicle::Server_OnBoostReleased_Validate() {
    return true;
}

void ASBZVehicle::Server_OnBoostPressed_Implementation() {
}
bool ASBZVehicle::Server_OnBoostPressed_Validate() {
    return true;
}

void ASBZVehicle::Server_ExitVehicle_Implementation() {
}
bool ASBZVehicle::Server_ExitVehicle_Validate() {
    return true;
}

void ASBZVehicle::Server_EnterVehicle_Implementation(APawn* Interactor) {
}
bool ASBZVehicle::Server_EnterVehicle_Validate(APawn* Interactor) {
    return true;
}

bool ASBZVehicle::PossessVehicle(APawn* Interactor) {
    return false;
}

void ASBZVehicle::OnInteraction(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}

void ASBZVehicle::OnExitVehicle_Implementation() {
}

bool ASBZVehicle::IsOccupied() const {
    return false;
}

bool ASBZVehicle::IsHandbrakeActive() const {
    return false;
}

bool ASBZVehicle::IsBoosting() const {
    return false;
}

bool ASBZVehicle::IsBoostEnabled() const {
    return false;
}

float ASBZVehicle::GetVehicleSpeed() const {
    return 0.0f;
}

float ASBZVehicle::GetEngineRotationSpeed() const {
    return 0.0f;
}

float ASBZVehicle::GetEngineMaxRotationSpeed() const {
    return 0.0f;
}

USBZVehicleSeatComponent* ASBZVehicle::GetClosestSeat(const FVector& Location) {
    return NULL;
}

float ASBZVehicle::GetBoostPercent() const {
    return 0.0f;
}

void ASBZVehicle::ExitVehicle() {
}

void ASBZVehicle::EnterVehicle(APawn* Interactor) {
}

void ASBZVehicle::EnableCameraExtensionTick_Implementation() {
}

void ASBZVehicle::DisableCameraExtensionTick_Implementation() {
}

void ASBZVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZVehicle, DriverPawn);
    DOREPLIFETIME(ASBZVehicle, bIsOccupied);
    DOREPLIFETIME(ASBZVehicle, bBoost);
    DOREPLIFETIME(ASBZVehicle, bCanBoost);
}

ASBZVehicle::ASBZVehicle() {
    this->DriverSeat = CreateDefaultSubobject<USBZVehicleDriverComponent>(TEXT("DriverSeat"));
    this->Interaction = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("Interaction"));
    this->AvoidanceSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AvoidanceSphere"));
    this->DriverPawn = NULL;
    this->CameraExtension = CreateDefaultSubobject<USBZCameraExtension>(TEXT("CameraExtension"));
    this->ChargeModule = NULL;
    this->HUDMenu = NULL;
    this->ViewYawMin = 1;
    this->BoostPower = 1;
    this->BoostConsumptionSpeed = 1;
    this->BoostRechargeSpeed = 1;
    this->BoostRechargeTime = 1;
    this->ViewYawMax = 1;
    this->bIsOccupied = false;
    this->bEnableBoost = true;
    this->bBoost = false;
    this->bCanBoost = true;
}

