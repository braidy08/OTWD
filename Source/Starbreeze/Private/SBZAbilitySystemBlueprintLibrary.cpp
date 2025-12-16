#include "SBZAbilitySystemBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

USBZAbilitySystemBlueprintLibrary::USBZAbilitySystemBlueprintLibrary() {
}

void USBZAbilitySystemBlueprintLibrary::UnbindEventFromAbilityCommitted(UAbilitySystemComponent* AbilitySystem, const FSBZDelegateHandleWrapper& Handle) {
}

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

TSubclassOf<USBZDamageType> USBZAbilitySystemBlueprintLibrary::GetDamageTypeClass(FGameplayEffectContextHandle Context) {
    return NULL;
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

void USBZAbilitySystemBlueprintLibrary::BindEventToAbilityCommitted(UAbilitySystemComponent* AbilitySystem, const FSBZGenericAbilityEvent& Event, FSBZDelegateHandleWrapper& Handle) {
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


