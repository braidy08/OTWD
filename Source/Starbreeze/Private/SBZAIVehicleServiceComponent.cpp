#include "SBZAIVehicleServiceComponent.h"

void USBZAIVehicleServiceComponent::Multicast_OnPossessVehicle_Implementation(FVector RelativeLocation) {
}

void USBZAIVehicleServiceComponent::Multicast_OnExitVehicle_Implementation(FVector ExitLocation) {
}

void USBZAIVehicleServiceComponent::Multicast_OnDetachFromVehicleSeat_Implementation(FVector ExitLocation) {
}

void USBZAIVehicleServiceComponent::Multicast_OnAttachToVehicleSeat_Implementation() {
}

int32 USBZAIVehicleServiceComponent::GetPathNavIndex() const {
    return 0;
}

int32 USBZAIVehicleServiceComponent::GetPathIndex() const {
    return 0;
}

TArray<FVector> USBZAIVehicleServiceComponent::GetPath() const {
    return TArray<FVector>();
}

TArray<FVector> USBZAIVehicleServiceComponent::GetNavPath() const {
    return TArray<FVector>();
}

void USBZAIVehicleServiceComponent::DebugDrawPath(const TArray<FVector>& PathToDraw) {
}

USBZAIVehicleServiceComponent::USBZAIVehicleServiceComponent() {
    this->PathDistance = 1;
}

