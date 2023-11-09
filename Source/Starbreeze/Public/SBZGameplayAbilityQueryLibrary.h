#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZCompositeGameplayAbilityQuery.h"
#include "SBZGameplayAttributeComparison.h"
#include "SBZGameplayEffectComparison.h"
#include "SBZGameplayTagComparison.h"
#include "SBZGameplayTagContainerComparison.h"
#include "SBZGameplayAbilityQueryLibrary.generated.h"

class AActor;
class UAbilitySystemComponent;
class USBZGameplayAbilityQuery;
class UTexture2D;

UCLASS(Blueprintable)
class STARBREEZE_API USBZGameplayAbilityQueryLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZGameplayAbilityQueryLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryGameplayTagFromActor(AActor* Actor, const FSBZGameplayTagComparison& Comparison);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryGameplayTagFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FSBZGameplayTagComparison& Comparison);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryGameplayTagContainerFromActor(AActor* Actor, const FSBZGameplayTagContainerComparison& Comparison);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryGameplayTagContainerFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FSBZGameplayTagContainerComparison& Comparison);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryGameplayEffectFromActor(AActor* Actor, const FSBZGameplayEffectComparison& Comparison);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryGameplayEffectFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FSBZGameplayEffectComparison& Comparison);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryGameplayAttributeFromActor(AActor* Actor, const FSBZGameplayAttributeComparison& Comparison);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryGameplayAttributeFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FSBZGameplayAttributeComparison& Comparison);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryGameplayAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const USBZGameplayAbilityQuery* AbilityQuery, FText& FailedReason, UTexture2D*& FailedIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryGameplayAbilityFromActor(AActor* Actor, const USBZGameplayAbilityQuery* AbilityQuery, FText& FailedReason, UTexture2D*& FailedIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryCompositeFromActor(AActor* Actor, const FSBZCompositeGameplayAbilityQuery& CompositeQuery, FText& FailedReason, UTexture2D*& FailedIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool QueryCompositeFromAbilitySystemComponent(UAbilitySystemComponent* AbilitySystem, const FSBZCompositeGameplayAbilityQuery& CompositeQuery, FText& FailedReason, UTexture2D*& FailedIcon);
    
};

