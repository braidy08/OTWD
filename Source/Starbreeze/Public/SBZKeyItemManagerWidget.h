#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "SBZItemWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZKeyItemManagerWidget.generated.h"

class ASBZPlayerCharacter;
class ASBZThrownItem;
class UAbilitySystemComponent;
class UGameplayEffect;
class UImage;
class UPanelWidget;
class USBZKeyItemWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZKeyItemManagerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ValidGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> ValidGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZKeyItemWidget> KeyItemBlueprint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* KeyItemPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* ThrowableImageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ThrownAppearAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ThrownDisappearAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ThrownAppearDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ThrownDisappearDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowSeperatorAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideSeperatorAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FActiveGameplayEffectHandle, FSBZItemWidget> EffectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, USBZKeyItemWidget*> TagMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* ManagerOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZThrownItem* CurrentThrownItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSeperator;
    
public:
    USBZKeyItemManagerWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UPanelWidget* PanelWidget, UImage* ImageWidget, UWidgetAnimation* ThrownAppearAnimation, UWidgetAnimation* ThrownDisappearAnimation, UWidgetAnimation* ThrownAppearDefaultAnimation, UWidgetAnimation* ThrownDisappearDefaultAnimation, UWidgetAnimation* ShowSeperatorAnimation, UWidgetAnimation* HideSeperatorAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetManagerOwner(ASBZPlayerCharacter* Owner);
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveKeyItem(const FActiveGameplayEffect& Effect);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearManagerOwner();
    
};

