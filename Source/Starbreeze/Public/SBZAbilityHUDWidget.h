#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Blueprint/UserWidget.h"
#include "EAbilityInput.h"
#include "SBZAbilityData.h"
#include "SBZAbilityResourceData.h"
#include "SBZAbilityHUDWidget.generated.h"

class ASBZCharacter;
class UAbilitySystemComponent;
class UGameplayAbility;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAbilityHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute AbilityOneMaxAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute AbilityTwoMaxAttribute;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZAbilityResourceData> AbilityOneUseResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZAbilityResourceData> AbilityOneCraftResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZAbilityResourceData> AbilityTwoUseResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZAbilityResourceData> AbilityTwoCraftResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameplayAbility* CraftOneGameplayAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameplayAbility* CraftTwoGameplayAbility;
    
public:
    USBZAbilityHUDWidget();
    UFUNCTION(BlueprintCallable)
    void RefreshAbilities();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup(const TArray<FSBZAbilityData>& SetupData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttributeUpdate(FGameplayAttribute Attribute, float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbilityCraftable(EAbilityInput AbilityInput, bool IsCraftable);
    
};

