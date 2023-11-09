#include "SBZGameProperty.h"
#include "Net/UnrealNetwork.h"

void USBZGameProperty::SetCurrentValue(float InCurrentValue) {
}

void USBZGameProperty::OnRep_CurrentValue(float PreviousValue) {
}


float USBZGameProperty::GetMaxValue() const {
    return 0.0f;
}

float USBZGameProperty::GetCurrentValue() const {
    return 0.0f;
}

float USBZGameProperty::GetBaseValue() const {
    return 0.0f;
}

void USBZGameProperty::AddValue(float Amount) {
}

void USBZGameProperty::AddModifier(const float Amount) {
}

void USBZGameProperty::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZGameProperty, StartValue);
    DOREPLIFETIME(USBZGameProperty, CurrentValue);
    DOREPLIFETIME(USBZGameProperty, MinValue);
    DOREPLIFETIME(USBZGameProperty, MaxValue);
    DOREPLIFETIME(USBZGameProperty, Modifier);
}

USBZGameProperty::USBZGameProperty() {
    this->PropertyName = TEXT("Unnamed Property");
    this->StartValue = 1;
    this->CurrentValue = 1;
    this->MinValue = 1;
    this->MaxValue = 1;
    this->Modifier = 1;
}

