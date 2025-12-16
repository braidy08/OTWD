#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ActiveGameplayEffectHandle -FallbackName=ActiveGameplayEffectHandle
#include "GameplayEffectTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpecHandle -FallbackName=GameplayEffectSpecHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEventData -FallbackName=GameplayEventData
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SBZDelegateHandleWrapper.h"
#include "SBZGenericAbilityEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZAbilitySystemBlueprintLibrary.generated.h"

class AActor;
class UAbilitySystemComponent;
class UAttributeSet;
class UGameplayEffect;
class USBZDamageType;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZAbilitySystemBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnbindEventFromAbilityCommitted(UAbilitySystemComponent* AbilitySystem, const FSBZDelegateHandleWrapper& Handle);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveGameplayTagsFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FGameplayTagContainer& InGameplayTags);
    
    UFUNCTION(BlueprintCallable)
    static void ModifyActiveGameplayEffectStartTime(UPARAM(Ref) FActiveGameplayEffectHandle& Handle, float StartTimeDelta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<UGameplayEffect> GetGameplayEffectClassFromEvent(const FGameplayEventData& EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FActiveGameplayEffectHandle GetFirstActiveEffectHandle(const TArray<FActiveGameplayEffectHandle>& Handles);
    
    UFUNCTION(BlueprintCallable)
    static void GetEffectCausersFromActiveEffects(UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayEffect> EffectDefinition, TArray<AActor*>& OutEffectCausers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<USBZDamageType> GetDamageTypeClass(FGameplayEffectContextHandle Context);
    
    UFUNCTION(BlueprintCallable)
    static float GetActiveGameplayEffectLevel(const FActiveGameplayEffectHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FActiveGameplayEffectHandle> GetActiveEffectsWithDefinition(const UAbilitySystemComponent* AbilitySystem, TSubclassOf<UGameplayEffect> EffectDefinition);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayEffectSpecHandle CreateEffectSpecWithCustomDuration(TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level, FGameplayEffectContextHandle Context, FGameplayTag DurationTag, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void BindEventToAbilityCommitted(UAbilitySystemComponent* AbilitySystem, const FSBZGenericAbilityEvent& Event, FSBZDelegateHandleWrapper& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreGameplayEffectApplicationTagRequirementsMet(TSubclassOf<UGameplayEffect> GameplayEffectClass, const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable)
    static bool AddGameplayTagsToAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FGameplayTagContainer& InGameplayTags);
    
    UFUNCTION(BlueprintCallable)
    static UAttributeSet* AddAttributeSet(UAbilitySystemComponent* Target, UAbilitySystemComponent* Source, TSubclassOf<UAttributeSet> AttributeSetClass);
    
};

