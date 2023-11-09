#include "SBZAbilitySystemBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

bool USBZAbilitySystemBlueprintLibrary::RemoveGameplayTagsFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FGameplayTagContainer& InGameplayTags) {
    return false;
}

void USBZAbilitySystemBlueprintLibrary::ModifyActiveGameplayEffectStartTime(FActiveGameplayEffectHandle& Handle, float StartTimeDelta) {
}

TSubclassOf<UGameplayEffect> USBZAbilitySystemBlueprintLibrary::GetGameplayEffectClassFromEvent(const FGameplayEventData& EventData) {
    return NULL;
}

FActiveGameplayEffectHandle USBZAbilitySystemBlueprintLibrary::GetFirstActiveEffectHandle(const TArray<FActiveGameplayEffectHandle>& Handles) {
    return FActiveGameplayEffectHandle{};
}

void USBZAbilitySystemBlueprintLibrary::GetEffectCausersFromActiveEffects(UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayEffect> EffectDefinition, TArray<AActor*>& OutEffectCausers) {
}

float USBZAbilitySystemBlueprintLibrary::GetActiveGameplayEffectLevel(const FActiveGameplayEffectHandle& Handle) {
    return 0.0f;
}

TArray<FActiveGameplayEffectHandle> USBZAbilitySystemBlueprintLibrary::GetActiveEffectsWithDefinition(const UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayEffect> EffectDefinition) {
    return TArray<FActiveGameplayEffectHandle>();
}

FGameplayEffectSpecHandle USBZAbilitySystemBlueprintLibrary::CreateEffectSpecWithCustomDuration(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level, FGameplayEffectContextHandle Context, FGameplayTag DurationTag, float Duration) {
    return FGameplayEffectSpecHandle{};
}

bool USBZAbilitySystemBlueprintLibrary::AreGameplayEffectApplicationTagRequirementsMet(TSubclassOf<UGameplayEffect> GameplayEffectClass, const FGameplayTagContainer& Tags) {
    return false;
}

bool USBZAbilitySystemBlueprintLibrary::AddGameplayTagsToAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FGameplayTagContainer& InGameplayTags) {
    return false;
}

UAttributeSet* USBZAbilitySystemBlueprintLibrary::AddAttributeSet(UAbilitySystemComponent* Target, UAbilitySystemComponent* Source, TSubclassOf<UAttributeSet> AttributeSetClass) {
    return NULL;
}

USBZAbilitySystemBlueprintLibrary::USBZAbilitySystemBlueprintLibrary() {
}

