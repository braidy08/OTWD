#include "SBZInventoryComponent.h"
#include "Net/UnrealNetwork.h"

void USBZInventoryComponent::UpdateItemsReplication() {
}

void USBZInventoryComponent::TakeItem(const FGuid& Guid, USBZInventoryComponent* OtherInventory) {
}

void USBZInventoryComponent::SetItems(const TArray<FSBZInventoryItem>& NewItems, bool bDropCurrentItems) {
}

void USBZInventoryComponent::Server_TakeItem_Implementation(const FGuid& Guid, USBZInventoryComponent* OtherInventory) {
}
bool USBZInventoryComponent::Server_TakeItem_Validate(const FGuid& Guid, USBZInventoryComponent* OtherInventory) {
    return true;
}

void USBZInventoryComponent::Server_GiveItem_Implementation(const FGuid& Guid, USBZInventoryComponent* OtherInventory) {
}
bool USBZInventoryComponent::Server_GiveItem_Validate(const FGuid& Guid, USBZInventoryComponent* OtherInventory) {
    return true;
}

void USBZInventoryComponent::Server_DropItem_Implementation(const FGuid& Guid) {
}
bool USBZInventoryComponent::Server_DropItem_Validate(const FGuid& Guid) {
    return true;
}

void USBZInventoryComponent::Rep_NotifyTakeFromChanged() {
}

void USBZInventoryComponent::Rep_NotifyItemsChanged() {
}

void USBZInventoryComponent::Rep_NotifyGiveToChanged() {
}

void USBZInventoryComponent::RemoveTakeFromInventory(USBZInventoryComponent* TakeFromInventoryComponent) {
}

void USBZInventoryComponent::RemoveGiveToInventory(USBZInventoryComponent* GiveToInventoryComponent) {
}

void USBZInventoryComponent::MoveItem(const FGuid& Guid, USBZInventoryComponent* OtherInventory, bool bUpdateReplication) {
}

void USBZInventoryComponent::MoveAllItems(USBZInventoryComponent* OtherInventory, bool bUpdateReplication) {
}

void USBZInventoryComponent::GiveItem(const FGuid& Guid, USBZInventoryComponent* OtherInventory) {
}

TArray<USBZInventoryComponent*> USBZInventoryComponent::GetTakeFromInventoryComponents() const {
    return TArray<USBZInventoryComponent*>();
}

TArray<FSBZInventoryItem> USBZInventoryComponent::GetItems() const {
    return TArray<FSBZInventoryItem>();
}

TArray<USBZInventoryComponent*> USBZInventoryComponent::GetGiveToInventoryComponents() const {
    return TArray<USBZInventoryComponent*>();
}

FString USBZInventoryComponent::GetDebugInventoryString() {
    return TEXT("");
}

void USBZInventoryComponent::DropItem(const FGuid& Guid) {
}

void USBZInventoryComponent::ClearTakeFromInventoryComponents(bool bRemoveGiveTo) {
}

void USBZInventoryComponent::ClearGiveToInventoryComponents(bool bRemoveTakeFrom) {
}

void USBZInventoryComponent::AddTakeFromInventory(USBZInventoryComponent* TakeFromInventoryComponent) {
}

void USBZInventoryComponent::AddGiveToInventory(USBZInventoryComponent* GiveToInventoryComponent) {
}

void USBZInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZInventoryComponent, GiveToInventoryComponents);
    DOREPLIFETIME(USBZInventoryComponent, TakeFromInventoryComponents);
    DOREPLIFETIME(USBZInventoryComponent, ItemsArray);
}

USBZInventoryComponent::USBZInventoryComponent() {
}

