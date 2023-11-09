#include "SBZGameplayAbilityQueryLibrary.h"

bool USBZGameplayAbilityQueryLibrary::QueryGameplayTagFromActor(AActor* Actor, const FSBZGameplayTagComparison& Comparison) {
    return false;
}

bool USBZGameplayAbilityQueryLibrary::QueryGameplayTagFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FSBZGameplayTagComparison& Comparison) {
    return false;
}

bool USBZGameplayAbilityQueryLibrary::QueryGameplayTagContainerFromActor(AActor* Actor, const FSBZGameplayTagContainerComparison& Comparison) {
    return false;
}

bool USBZGameplayAbilityQueryLibrary::QueryGameplayTagContainerFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FSBZGameplayTagContainerComparison& Comparison) {
    return false;
}

bool USBZGameplayAbilityQueryLibrary::QueryGameplayEffectFromActor(AActor* Actor, const FSBZGameplayEffectComparison& Comparison) {
    return false;
}

bool USBZGameplayAbilityQueryLibrary::QueryGameplayEffectFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FSBZGameplayEffectComparison& Comparison) {
    return false;
}

bool USBZGameplayAbilityQueryLibrary::QueryGameplayAttributeFromActor(AActor* Actor, const FSBZGameplayAttributeComparison& Comparison) {
    return false;
}

bool USBZGameplayAbilityQueryLibrary::QueryGameplayAttributeFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FSBZGameplayAttributeComparison& Comparison) {
    return false;
}

bool USBZGameplayAbilityQueryLibrary::QueryGameplayAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const USBZGameplayAbilityQuery* AbilityQuery, FText& FailedReason, UTexture2D*& FailedIcon) {
    return false;
}

bool USBZGameplayAbilityQueryLibrary::QueryGameplayAbilityFromActor(AActor* Actor, const USBZGameplayAbilityQuery* AbilityQuery, FText& FailedReason, UTexture2D*& FailedIcon) {
    return false;
}

bool USBZGameplayAbilityQueryLibrary::QueryCompositeFromActor(AActor* Actor, const FSBZCompositeGameplayAbilityQuery& CompositeQuery, FText& FailedReason, UTexture2D*& FailedIcon) {
    return false;
}

bool USBZGameplayAbilityQueryLibrary::QueryCompositeFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FSBZCompositeGameplayAbilityQuery& CompositeQuery, FText& FailedReason, UTexture2D*& FailedIcon) {
    return false;
}

USBZGameplayAbilityQueryLibrary::USBZGameplayAbilityQueryLibrary() {
}

