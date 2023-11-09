#include "SBZUIManager.h"
#include "Templates/SubclassOf.h"

void USBZUIManager::ToggleNotification(bool bCanShow) {
}

USBZPopupWidget* USBZUIManager::ShowPopup(UObject* WorldContextObject, const FText& TitleText, UUserWidget* BodyWidget, const TArray<FName>& InActionNames, const TArray<FText>& InButtonLabels) {
    return NULL;
}

void USBZUIManager::ShowNotification(UObject* WorldContextObject, FText TitleText, FText BodyText, float Duration, ENotificationPriority Priority, bool bShowProgress, int32 CurrentProgress, int32 MaxProgress, UTexture2D* Icon) {
}

void USBZUIManager::ShowHUDBannerText(UObject* WorldContextObject, FText LocalisedText, float Duration, bool bShowImmediate, UAkAudioEvent* SoundEvent) {
}

bool USBZUIManager::ShowHUD() {
    return false;
}

void USBZUIManager::ShowAllMarkers(UObject* WorldContextObject, float Delay, float FadeSpeed) {
}

void USBZUIManager::SetIsPopupOpen(bool bIsOpen) {
}

void USBZUIManager::SetInputModeToUI() {
}

void USBZUIManager::SetInputModeToGameAndUI() {
}

void USBZUIManager::SetInputModeToGame() {
}

void USBZUIManager::SetCanShowPauseScreen(bool CanShow) {
}

void USBZUIManager::SetCanShowHUD(bool CanShow) {
}

void USBZUIManager::PostLoadMap(UWorld* World) {
}

void USBZUIManager::OnVirtualCursorClicked(bool bIsGamepad) {
}

bool USBZUIManager::IsPopupVisible() {
    return false;
}

bool USBZUIManager::IsLoadingScreenActive() const {
    return false;
}

void USBZUIManager::HideHUD() {
}

void USBZUIManager::HideAllMarkers(UObject* WorldContextObject, float Delay, float FadeSpeed) {
}

bool USBZUIManager::HasTutorialTag(const FName& InTutorialTag) {
    return false;
}

USBZUIManager* USBZUIManager::GetUIManager(UObject* WorldContextObject) {
    return NULL;
}

bool USBZUIManager::GetSkipIntroMovies() {
    return false;
}

FSBZPlayerUIData USBZUIManager::GetPlayerUIData(UObject* WorldContextObject, const TSubclassOf<APawn> InPlayer) {
    return FSBZPlayerUIData{};
}

ESBZPlatformType USBZUIManager::GetPlatform(UObject* WorldContextObject) {
    return ESBZPlatformType::PC;
}

UUserWidget* USBZUIManager::GetHUD() const {
    return NULL;
}

FSBZUIFont USBZUIManager::GetGlobalFont(UObject* WorldContextObject, FName FontName) {
    return FSBZUIFont{};
}

FLinearColor USBZUIManager::GetGlobalColor(UObject* WorldContextObject, FName ColorName) {
    return FLinearColor{};
}

FSBZGameplayTagUIData USBZUIManager::GetGameplayTagUIData(UObject* WorldContextObject, const FGameplayTag& InTag) {
    return FSBZGameplayTagUIData{};
}

FSBZGameplayEffectUIData USBZUIManager::GetGameplayEffectUIData(UObject* WorldContextObject, const UGameplayEffect* InEffect) {
    return FSBZGameplayEffectUIData{};
}

FSBZGameplayAttributeUIData USBZUIManager::GetGameplayAttributeUIData(UObject* WorldContextObject, const FGameplayAttribute& InAttribute) {
    return FSBZGameplayAttributeUIData{};
}

ESBZControllerUIType USBZUIManager::GetCurrentControllerType() const {
    return ESBZControllerUIType::Keyboard;
}

FSBZAbilityUIData USBZUIManager::GetAbilityUIData(UObject* WorldContextObject, const TSubclassOf<UGameplayAbility> InAbility) {
    return FSBZAbilityUIData{};
}

bool USBZUIManager::DeleteMarker(UObject* WorldContextObject, USBZUIMarker* Marker) {
    return false;
}

USBZUIMarker* USBZUIManager::CreateWorldPosMarker(UObject* WorldContextObject, const FVector& TargetPos, TSubclassOf<USBZMarkerWidget> OnScreenBlueprint, TSubclassOf<USBZMarkerWidget> OffScreenBlueprint, UTexture2D* OnScreenIcon, UTexture2D* OffScreenIcon, const FString& DisplayText, bool HasOnScreenTracking, bool HasOffScreenTracking, bool ShowDistance, float MinVisibleDistance, float MaxVisibleDistance, float InitialFadeAlpha) {
    return NULL;
}

USBZUIMarker* USBZUIManager::CreateSceneComponentMarker(UObject* WorldContextObject, USceneComponent* TargetSceneComponent, const FVector& PosOffset, TSubclassOf<USBZMarkerWidget> OnScreenBlueprint, TSubclassOf<USBZMarkerWidget> OffScreenBlueprint, UTexture2D* OnScreenIcon, UTexture2D* OffScreenIcon, const FString& DisplayText, bool HasOnScreenTracking, bool HasOffScreenTracking, bool ShowDistance, float MinVisibleDistance, float MaxVisibleDistance, float InitialFadeAlpha) {
    return NULL;
}

USBZUIMarker* USBZUIManager::CreateActorMarker(UObject* WorldContextObject, AActor* TargetActor, const FVector& PosOffset, TSubclassOf<USBZMarkerWidget> OnScreenBlueprint, TSubclassOf<USBZMarkerWidget> OffScreenBlueprint, UTexture2D* OnScreenIcon, UTexture2D* OffScreenIcon, const FString& DisplayText, bool HasOnScreenTracking, bool HasOffScreenTracking, bool ShowDistance, float MinVisibleDistance, float MaxVisibleDistance, float InitialFadeAlpha) {
    return NULL;
}

void USBZUIManager::AddTutorialTag(const FName& InTutorialTag) {
}

USBZUIManager::USBZUIManager() {
    this->LoadingManagerClass = NULL;
    this->NotificationWidgetBlueprint = NULL;
    this->PopupWidgetBlueprint = NULL;
    this->PauseOpenSoundEvent = NULL;
    this->PauseClosedSoundEvent = NULL;
    this->LoadingScreenManager = NULL;
    this->PauseMenuWidget = NULL;
    this->HUDWidget = NULL;
    this->UIGlobalsSchematic = NULL;
    this->LastUser = NULL;
    this->NotificationWidget = NULL;
    this->PopupWidget = NULL;
    this->CurrentControllerType = ESBZControllerUIType::Keyboard;
    this->UISaveData = NULL;
}

