#include "SBZUIBlueprintLibrary.h"

void USBZUIBlueprintLibrary::ShowSteamStoreOverlayForContentPack(const UObject* WorldContextObject, USBZContentPack* contentPack) {
}

void USBZUIBlueprintLibrary::ShowSteamStoreOverlayForAppID(const UObject* WorldContextObject, const FString& AppID) {
}

bool USBZUIBlueprintLibrary::IsShippingBuild() {
    return false;
}

bool USBZUIBlueprintLibrary::IsNewsFeedOn() {
    return false;
}

bool USBZUIBlueprintLibrary::IsBetaOn(const UObject* WorldContextObject) {
    return false;
}

FString USBZUIBlueprintLibrary::GetProjectVersion() {
    return TEXT("");
}

int32 USBZUIBlueprintLibrary::GetMaxPlayers(const UObject* WorldContextObject) {
    return 0;
}

USBZUIBlueprintLibrary::USBZUIBlueprintLibrary() {
}

