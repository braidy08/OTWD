#pragma once
#include "CoreMinimal.h"
#include "SBZAbilityElementBaseWidget.h"
#include "SBZAbilityElementWidget.generated.h"

class UImage;
class USBZActionImageWidget;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAbilityElementWidget : public USBZAbilityElementBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* AbilityIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* AmmoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZActionImageWidget* ActionImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* ResourceImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AbilityNotUseableAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AbilityUseableAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AbilityNotUseableDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AbilityUseableDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AbilityUsedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AbilityCraftedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ResourceUpdatedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowCraftableAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideCraftableAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowCraftableDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideCraftableDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AbilityFailedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AbilityActivationAnim;
    
public:
    USBZAbilityElementWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UImage* AbilityIconWidget, UTextBlock* AmmoTextWidget, USBZActionImageWidget* ActionImageWidget, UImage* ResourceImageWidget, UWidgetAnimation* AbilityNotUseableAnimation, UWidgetAnimation* AbilityUseableAnimation, UWidgetAnimation* AbilityNotUseableDefaultAnimation, UWidgetAnimation* AbilityUseableDefaultAnimation, UWidgetAnimation* AbilityUsedAnimation, UWidgetAnimation* AbilityCraftedAnimation, UWidgetAnimation* ResourceUpdatedAnimation, UWidgetAnimation* FadeInAnimation, UWidgetAnimation* FadeOutAnimation, UWidgetAnimation* AbilityFailedAnimation, UWidgetAnimation* ShowCraftableAnimation, UWidgetAnimation* HideCraftableAnimation, UWidgetAnimation* ShowCraftableDefaultAnimation, UWidgetAnimation* HideCraftableDefaultAnimation, UWidgetAnimation* AbilityActivationAnimation);
    
};

