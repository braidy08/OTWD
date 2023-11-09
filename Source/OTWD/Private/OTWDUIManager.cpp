#include "OTWDUIManager.h"

void UOTWDUIManager::RequestWBPLoad(UUserWidget* RequestingWidget, FName WidgetName, TSoftClassPtr<UUserWidget> WBPSoftClassToLoad, FOnWBPLoaded Callback) {
}

bool UOTWDUIManager::GetCvarState(const FString& Cvar) {
    return false;
}

FString UOTWDUIManager::GetBuildVersion() {
    return TEXT("");
}

void UOTWDUIManager::ChangeHUDWidgetsVisibility(UObject* WorldContextObject, int32 VisibilityMask) {
}

void UOTWDUIManager::ChangeGlobalWidgetsVisibility(UObject* WorldContextObject, int32 VisibilityMask) {
}

UOTWDUIManager::UOTWDUIManager() {
}

