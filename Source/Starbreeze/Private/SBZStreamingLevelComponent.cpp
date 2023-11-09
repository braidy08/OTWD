#include "SBZStreamingLevelComponent.h"

void USBZStreamingLevelComponent::SetWorldAssets(const TArray<FSBZLODLevelReference>& WorldAssets) {
}

void USBZStreamingLevelComponent::SetWorldAsset(const TSoftObjectPtr<UWorld>& WorldAsset) {
}

bool USBZStreamingLevelComponent::SetStreamingLevelLOD(int32 NewLODIndex) {
    return false;
}

void USBZStreamingLevelComponent::OnLevelUnloadedRelay() {
}

void USBZStreamingLevelComponent::OnLevelShownRelay() {
}

void USBZStreamingLevelComponent::OnLevelLoadedRelay() {
}

void USBZStreamingLevelComponent::OnLevelHiddenRelay() {
}

TArray<FSBZLODLevelReference> USBZStreamingLevelComponent::GetWorldAssetReferences() {
    return TArray<FSBZLODLevelReference>();
}

ULevelStreaming* USBZStreamingLevelComponent::GetStreamingLevel() const {
    return NULL;
}

ULevel* USBZStreamingLevelComponent::GetLoadedLevel() const {
    return NULL;
}

void USBZStreamingLevelComponent::DestroyStreamingLevel(bool bPerformUpdate) {
}

bool USBZStreamingLevelComponent::CreateStreamingLevel(bool bForceRecreate, bool bPerformUpdate) {
    return false;
}

USBZStreamingLevelComponent::USBZStreamingLevelComponent() {
    this->bShouldBlockOnLoad = false;
    this->bIsStatic = false;
    this->StreamingLevel = NULL;
}

