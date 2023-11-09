#include "SBZPlayerStealthMeterComponent.h"
#include "Net/UnrealNetwork.h"

bool USBZPlayerStealthMeterComponent::IsInStealth() const {
    return false;
}

int32 USBZPlayerStealthMeterComponent::GetMaxMarkersSize() const {
    return 0;
}

FSBZStealthMeterData USBZPlayerStealthMeterComponent::GetHighestAlertness() const {
    return FSBZStealthMeterData{};
}

int32 USBZPlayerStealthMeterComponent::GetCurSizeOfAlertnessList() const {
    return 0;
}

void USBZPlayerStealthMeterComponent::GetAlertnessList(TArray<FSBZStealthMeterData>& OutArray) const {
}

FSBZStealthMeterData USBZPlayerStealthMeterComponent::GetAlertnessByIndex(int32 nIndex) const {
    return FSBZStealthMeterData{};
}

void USBZPlayerStealthMeterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZPlayerStealthMeterComponent, bIsInStealth);
    DOREPLIFETIME(USBZPlayerStealthMeterComponent, AlertnessList);
}

USBZPlayerStealthMeterComponent::USBZPlayerStealthMeterComponent() {
    this->MaxAlertMarkers = 0;
    this->bIsInStealth = true;
}

