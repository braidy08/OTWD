#include "SBZUIStatics.h"

void USBZUIStatics::ShowLevelTutorial(const UObject* WorldContextObject, FName TutorialName) {
}

USBZLevelSchematic* USBZUIStatics::SchematicNetworkToLevel(const UObject* WorldContextObject, const FSBZSchematicNetworkReference& NetworkSchematic) {
    return NULL;
}

void USBZUIStatics::LogUiVerbose(const FString& LogText) {
}

void USBZUIStatics::LoadoutSetWeaponSecondary(const UObject* WorldContextObject, const USBZWeaponSchematic* WeaponSecondary) {
}

void USBZUIStatics::LoadoutSetWeaponPrimary(const UObject* WorldContextObject, const USBZWeaponSchematic* WeaponPrimary) {
}

void USBZUIStatics::LoadoutSetWeaponMelee(const UObject* WorldContextObject, const USBZWeaponSchematic* WeaponMelee) {
}

void USBZUIStatics::LoadoutSetCharacterSkin(const UObject* WorldContextObject, USBZCharacterSkin* CharacterSkin) {
}

void USBZUIStatics::LoadoutSetCharacter(const UObject* WorldContextObject, USBZCharacterSchematic* Character) {
}

bool USBZUIStatics::IsLoadingScreenActive(const UObject* WorldContextObject) {
    return false;
}

void USBZUIStatics::HideLevelTutorial(const UObject* WorldContextObject) {
}

int32 USBZUIStatics::GetWidgetZOrderValue(ESBZWidgetZOrdering ZOrder) {
    return 0;
}

ASBZPlayerState* USBZUIStatics::GetStateForLocalPlayer(const UObject* WorldContextObject) {
    return NULL;
}

ULocalPlayer* USBZUIStatics::GetLocalPlayer(const UObject* WorldContextObject) {
    return NULL;
}

FText USBZUIStatics::FloatToText(float FloatToConvert, int32 Integral, int32 Precision) {
    return FText::GetEmpty();
}

ASBZPlayerState* USBZUIStatics::FindStateForPlayerIndex(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

ASBZPlayerCharacter* USBZUIStatics::FindCharacterForPlayerIndex(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

USBZUIStatics::USBZUIStatics() {
}

