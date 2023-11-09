#include "SBZPropertyComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void USBZPropertyComponent::SetDynamicTarget_Implementation(const int32 PropertyID, const float NewValue) {
}
bool USBZPropertyComponent::SetDynamicTarget_Validate(const int32 PropertyID, const float NewValue) {
    return true;
}

void USBZPropertyComponent::SetDynamicCurrent_Implementation(const int32 PropertyID, const float NewValue) {
}
bool USBZPropertyComponent::SetDynamicCurrent_Validate(const int32 PropertyID, const float NewValue) {
    return true;
}

void USBZPropertyComponent::ResetStaticMutator_Implementation(const int32 PropertyID, const EMutatorType Type, const FName& Identifier) {
}
bool USBZPropertyComponent::ResetStaticMutator_Validate(const int32 PropertyID, const EMutatorType Type, const FName& Identifier) {
    return true;
}

void USBZPropertyComponent::ResetDynamicMutator_Implementation(const int32 PropertyID, const EDynamicValueType Value, const EMutatorType Type, const FName& Identifier) {
}
bool USBZPropertyComponent::ResetDynamicMutator_Validate(const int32 PropertyID, const EDynamicValueType Value, const EMutatorType Type, const FName& Identifier) {
    return true;
}

void USBZPropertyComponent::RemoveModifier(USBZPropertyModifier* Modifier) {
}

void USBZPropertyComponent::RegisterStaticMutator_Implementation(const int32 PropertyID, const EMutatorType Type, const FName& Identifier, const float DefaultValue) {
}
bool USBZPropertyComponent::RegisterStaticMutator_Validate(const int32 PropertyID, const EMutatorType Type, const FName& Identifier, const float DefaultValue) {
    return true;
}

void USBZPropertyComponent::RegisterDynamicMutator_Implementation(const int32 PropertyID, const EDynamicValueType Value, const EMutatorType Type, const FName& Identifier, const float DefaultValue) {
}
bool USBZPropertyComponent::RegisterDynamicMutator_Validate(const int32 PropertyID, const EDynamicValueType Value, const EMutatorType Type, const FName& Identifier, const float DefaultValue) {
    return true;
}

bool USBZPropertyComponent::IsValidPropertyID(const int32 PropertyID) {
    return false;
}

int32 USBZPropertyComponent::GetStaticPropertyID(const FName& PropertyIdentifier) {
    return 0;
}

float USBZPropertyComponent::GetStatic(const int32& PropertyID) {
    return 0.0f;
}

USBZGameProperty* USBZPropertyComponent::GetPropertyByName(FName PropertyName) const {
    return NULL;
}

USBZGameProperty* USBZPropertyComponent::GetProperty(TSubclassOf<USBZGameProperty> PropertyClass) const {
    return NULL;
}

float USBZPropertyComponent::GetDynamicValue(const int32& PropertyID, const EDynamicValueType Value) {
    return 0.0f;
}

float USBZPropertyComponent::GetDynamicTarget(const int32& PropertyID) {
    return 0.0f;
}

int32 USBZPropertyComponent::GetDynamicPropertyID(const FName& PropertyIdentifier) {
    return 0;
}

float USBZPropertyComponent::GetDynamicCurrent(const int32& PropertyID) {
    return 0.0f;
}

void USBZPropertyComponent::ChangeStaticMutator_Implementation(const int32 PropertyID, const EMutatorType Type, const FName& Identifier, const float NewValue) {
}
bool USBZPropertyComponent::ChangeStaticMutator_Validate(const int32 PropertyID, const EMutatorType Type, const FName& Identifier, const float NewValue) {
    return true;
}

void USBZPropertyComponent::ChangeDynamicMutator_Implementation(const int32 PropertyID, const EDynamicValueType Value, const EMutatorType Type, const FName& Identifier, const float NewValue) {
}
bool USBZPropertyComponent::ChangeDynamicMutator_Validate(const int32 PropertyID, const EDynamicValueType Value, const EMutatorType Type, const FName& Identifier, const float NewValue) {
    return true;
}

float USBZPropertyComponent::ChangeDynamicCurrent(const int32& PropertyID, const float DeltaValue) {
    return 0.0f;
}

bool USBZPropertyComponent::AddModifierObject(TSubclassOf<USBZGameProperty> TargetProperty, USBZPropertyModifier* Modifier) {
    return false;
}

USBZPropertyModifier* USBZPropertyComponent::AddModifier(TSubclassOf<USBZPropertyModifier> ModifierType, TSubclassOf<USBZGameProperty> TargetProperty) {
    return NULL;
}

void USBZPropertyComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZPropertyComponent, Properties);
    DOREPLIFETIME(USBZPropertyComponent, StaticGameProperties);
    DOREPLIFETIME(USBZPropertyComponent, DynamicGameProperties);
}

USBZPropertyComponent::USBZPropertyComponent() {
}

