#include "SBZEquippable.h"
#include "Net/UnrealNetwork.h"
#include "SBZEquippableAttributeSet.h"

void ASBZEquippable::RefillAmmo(EEquippableSlotId SlotID, int32 Amount) {
}

void ASBZEquippable::OnDeactivateActionSlot2_Implementation() {
}

void ASBZEquippable::OnDeactivateActionSlot1_Implementation() {
}

void ASBZEquippable::OnDeactivateActionSlot0_Implementation() {
}

void ASBZEquippable::OnActivateActionSlot2_Implementation() {
}

void ASBZEquippable::OnActivateActionSlot1_Implementation() {
}

void ASBZEquippable::OnActivateActionSlot0_Implementation() {
}

bool ASBZEquippable::HasAmmo(EEquippableSlotId SlotID) const {
    return false;
}

int32 ASBZEquippable::GetUsesLeft(EEquippableSlotId SlotID) const {
    return 0;
}

int32 ASBZEquippable::GetMaxUses(EEquippableSlotId SlotID) const {
    return 0;
}

void ASBZEquippable::EndAbilityActionAtSlot(EEquippableSlotId SlotID) {
}

void ASBZEquippable::ConsumeAmmo(EEquippableSlotId SlotID, float MagnitudeScale) {
}

void ASBZEquippable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZEquippable, AbilityBindInfo);
}

ASBZEquippable::ASBZEquippable() {
    this->EquippableAttributeSet = CreateDefaultSubobject<USBZEquippableAttributeSet>(TEXT("SBZEquippableAttributeSet"));
    this->bTickOnlyWhenEquipped = true;
}

