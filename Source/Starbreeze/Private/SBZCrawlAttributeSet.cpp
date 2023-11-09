#include "SBZCrawlAttributeSet.h"
#include "Net/UnrealNetwork.h"

void USBZCrawlAttributeSet::OnRep_StrengthRequiredToStandup(float OldValue) {
}

void USBZCrawlAttributeSet::OnRep_StrengthMaximumRequiredToStandup(float OldValue) {
}

void USBZCrawlAttributeSet::OnRep_StrengthGatherRate(float OldValue) {
}

void USBZCrawlAttributeSet::OnRep_HelpStandMultiplier(float OldValue) {
}

void USBZCrawlAttributeSet::OnRep_CrawlHeight(float OldValue) {
}

void USBZCrawlAttributeSet::OnRep_CrawlCameraHeight(float OldValue) {
}

FGameplayAttribute USBZCrawlAttributeSet::GetStrengthRequiredToStandupAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZCrawlAttributeSet::GetStrengthMaximumRequiredToStandupAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZCrawlAttributeSet::GetStrengthGatherRateAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZCrawlAttributeSet::GetHelpStandMultiplierAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZCrawlAttributeSet::GetCrawlHeightAttribute() {
    return FGameplayAttribute{};
}

FGameplayAttribute USBZCrawlAttributeSet::GetCrawlCameraHeightAttribute() {
    return FGameplayAttribute{};
}

void USBZCrawlAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZCrawlAttributeSet, StrengthRequiredToStandup);
    DOREPLIFETIME(USBZCrawlAttributeSet, StrengthMaximumRequiredToStandup);
    DOREPLIFETIME(USBZCrawlAttributeSet, StrengthGatherRate);
    DOREPLIFETIME(USBZCrawlAttributeSet, HelpStandMultiplier);
    DOREPLIFETIME(USBZCrawlAttributeSet, CrawlHeight);
    DOREPLIFETIME(USBZCrawlAttributeSet, CrawlCameraHeight);
}

USBZCrawlAttributeSet::USBZCrawlAttributeSet() {
    this->StrengthRequiredToStandup = 1;
    this->StrengthMaximumRequiredToStandup = 1;
    this->StrengthGatherRate = 1;
    this->HelpStandMultiplier = 1;
    this->CrawlHeight = 1;
    this->CrawlCameraHeight = 1;
}

