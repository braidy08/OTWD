#include "SBZPlayerVehicleServiceComponent.h"
#include "Net/UnrealNetwork.h"

void USBZPlayerVehicleServiceComponent::SetViewYawLimit_Implementation(float ViewYawMin, float ViewYawMax) {
}

void USBZPlayerVehicleServiceComponent::Server_OnPreviousSeat_Implementation() {
}
bool USBZPlayerVehicleServiceComponent::Server_OnPreviousSeat_Validate() {
    return true;
}

void USBZPlayerVehicleServiceComponent::Server_OnNextSeat_Implementation() {
}
bool USBZPlayerVehicleServiceComponent::Server_OnNextSeat_Validate() {
    return true;
}

void USBZPlayerVehicleServiceComponent::Server_DetachFromVehicleSeat_Implementation() {
}
bool USBZPlayerVehicleServiceComponent::Server_DetachFromVehicleSeat_Validate() {
    return true;
}

void USBZPlayerVehicleServiceComponent::RPC_OnPossessVehicleSeat_Implementation() {
}

void USBZPlayerVehicleServiceComponent::RPC_OnPossessVehicle_Implementation(FVector RelativeLocation) {
}

void USBZPlayerVehicleServiceComponent::RPC_OnExitVehicle_Implementation(FVector ExitLocation) {
}

void USBZPlayerVehicleServiceComponent::RPC_OnDetachFromVehicleSeat_Implementation(FVector ExitLocation) {
}

void USBZPlayerVehicleServiceComponent::RPC_OnAttachToVehicleSeat_Implementation() {
}

void USBZPlayerVehicleServiceComponent::OnPossessVehicle_CameraSetup_Implementation(ASBZVehicle* TargetVehicle) {
}

void USBZPlayerVehicleServiceComponent::OnExitVehicle_CameraReset_Implementation() {
}

void USBZPlayerVehicleServiceComponent::OnAttachToSeat_CameraSetup_LimitYaw_Implementation(ASBZVehicle* TargetVehicle, float YawMin, float YawMax) {
}

void USBZPlayerVehicleServiceComponent::OnAttachToSeat_CameraSetup_FreeYaw_Implementation(ASBZVehicle* TargetVehicle) {
}

void USBZPlayerVehicleServiceComponent::Client_OnPossesVehicle_Implementation() {
}

void USBZPlayerVehicleServiceComponent::Client_OnDetachFromVehicleSeat_Implementation() {
}

void USBZPlayerVehicleServiceComponent::Client_OnAttachToVehicleSeat_Implementation() {
}

void USBZPlayerVehicleServiceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZPlayerVehicleServiceComponent, Vehicle);
}

USBZPlayerVehicleServiceComponent::USBZPlayerVehicleServiceComponent() {
    this->Vehicle = NULL;
}

