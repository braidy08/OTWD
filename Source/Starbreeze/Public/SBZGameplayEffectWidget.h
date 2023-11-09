#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffect.h"
#include "Blueprint/UserWidget.h"
#include "SBZGameplayEffectWidget.generated.h"

class UAbilitySystemComponent;
class UGameplayEffect;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZGameplayEffectWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilitySystemComponent> SourceAbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlueprintShouldGameplayEffectBeAddedEnabled;
    
public:
    USBZGameplayEffectWidget();
    UFUNCTION(BlueprintCallable)
    void UnbindEvents();
    
    UFUNCTION(BlueprintCallable)
    void SetAbilitySystemComponent(UAbilitySystemComponent* InSourceAbilitySystem, bool bInBindEvents);
    
    UFUNCTION(BlueprintCallable)
    void RefreshUIData();
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayEffectAdded(UAbilitySystemComponent* AbilitySystemComponent, const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void GameplayEffectStackCountChanged(FActiveGameplayEffectHandle Handle, int32 NewStackCount, int32 OldStackCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_ShouldGameplayEffectBeAdded(const UGameplayEffect* GameplayEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GameplayEffectRemoved(FActiveGameplayEffectHandle Handle, const UGameplayEffect* GameplayEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GameplayEffectModified(FActiveGameplayEffectHandle Handle, const UGameplayEffect* GameplayEffect, int32 StackCount, int32 OldStackCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GameplayEffectAdded(FActiveGameplayEffectHandle Handle, const UGameplayEffect* GameplayEffect, int32 StackCount);
    
    UFUNCTION(BlueprintCallable)
    void BindEvents();
    
};

