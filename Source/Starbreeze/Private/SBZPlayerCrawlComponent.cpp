#include "SBZPlayerCrawlComponent.h"
#include "Net/UnrealNetwork.h"

void USBZPlayerCrawlComponent::StopCrawling() {
}

void USBZPlayerCrawlComponent::StartCrawling() {
}

void USBZPlayerCrawlComponent::Server_StopCrawling_Implementation() {
}
bool USBZPlayerCrawlComponent::Server_StopCrawling_Validate() {
    return true;
}

void USBZPlayerCrawlComponent::Server_StartCrawling_Implementation() {
}
bool USBZPlayerCrawlComponent::Server_StartCrawling_Validate() {
    return true;
}

void USBZPlayerCrawlComponent::Server_OnTryToGetUpExit_Implementation() {
}
bool USBZPlayerCrawlComponent::Server_OnTryToGetUpExit_Validate() {
    return true;
}

void USBZPlayerCrawlComponent::Server_OnTryToGetUpEnter_Implementation() {
}
bool USBZPlayerCrawlComponent::Server_OnTryToGetUpEnter_Validate() {
    return true;
}

void USBZPlayerCrawlComponent::Server_OnAimExit_Implementation() {
}
bool USBZPlayerCrawlComponent::Server_OnAimExit_Validate() {
    return true;
}

void USBZPlayerCrawlComponent::Server_OnAimEnter_Implementation() {
}
bool USBZPlayerCrawlComponent::Server_OnAimEnter_Validate() {
    return true;
}

void USBZPlayerCrawlComponent::OnRep_IsCrawling(bool bOldValue) {
}

void USBZPlayerCrawlComponent::OnPlayerHelpSuccess(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}

void USBZPlayerCrawlComponent::OnPlayerDefeatStateChanged(ESBZPlayerDefeatState NewState, AActor* Owner) {
}

void USBZPlayerCrawlComponent::Multicast_OnStopCrawling_Implementation() {
}

bool USBZPlayerCrawlComponent::IsCrawling() const {
    return false;
}

void USBZPlayerCrawlComponent::Client_OnTryToGetUpExit_Implementation() {
}

void USBZPlayerCrawlComponent::Client_OnTryToGetUpEnter_Implementation() {
}

void USBZPlayerCrawlComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZPlayerCrawlComponent, bIsCrawling);
}

USBZPlayerCrawlComponent::USBZPlayerCrawlComponent() {
    this->InteractableToSpawn = NULL;
    this->UIWidgetClass = NULL;
    this->SpawnedInteractable = NULL;
    this->UIWidget = NULL;
    this->bIsCrawling = false;
}

