#include "SBZWaypointComponent.h"
#include "Net/UnrealNetwork.h"

void USBZWaypointComponent::SetUIMarkerData(USBZUIMarkerData* NewMarkerData) {
}

void USBZWaypointComponent::SetMarkerVisible(bool bInVisible) {
}

void USBZWaypointComponent::OnRep_UIMarkerData() {
}

void USBZWaypointComponent::OnRep_IsVisible() {
}

bool USBZWaypointComponent::IsMarkerVisible() const {
    return false;
}

void USBZWaypointComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZWaypointComponent, UIMarkerData);
    DOREPLIFETIME(USBZWaypointComponent, bIsVisible);
}

USBZWaypointComponent::USBZWaypointComponent() {
    this->UIMarkerData = NULL;
    this->UIMarker = NULL;
    this->bStartVisible = false;
    this->bIsVisible = false;
}

