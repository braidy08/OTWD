#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESBZButtonInputType.h"
#include "ESBZControllerUIType.h"
#include "PopupInteractionDelegate.h"
#include "PopupInteractionWithSenderDelegate.h"
#include "SBZPopupWidget.generated.h"

class UCanvasPanel;
class USBZActionButtonPanelWidget;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZPopupWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPopupInteraction OnPopupInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPopupInteractionWithSender OnPopupInteractionWithSender;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDisplayTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* BodyPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZActionButtonPanelWidget* ActionButtonPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZControllerUIType ControllerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BackgroundFadeInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BackgroundFadeInDefaultAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowHeaderAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideHeaderAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowButtonAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideButtonAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasUsingCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentDisplayTime;
    
public:
    USBZPopupWidget();
    UFUNCTION(BlueprintCallable)
    void ShowPopup(const FText& Title, UUserWidget* BodyWidget, const TArray<FName>& InActionNames, const TArray<FText>& InButtonLabels, bool bImportantPopup);
    
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UTextBlock* TitleTextWidget, UCanvasPanel* BodyPanelWidget, USBZActionButtonPanelWidget* ActionButtonPanelWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetupAnimations(UWidgetAnimation* BackgroundFadeInAnimation, UWidgetAnimation* BackgroundFadeInDefaultAnimation, UWidgetAnimation* FadeInAnimation, UWidgetAnimation* FadeOutAnimation, UWidgetAnimation* ShowHeaderAnimation, UWidgetAnimation* HideHeaderAnimation, UWidgetAnimation* ShowButtonAnimation, UWidgetAnimation* HideButtonAnimation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnControllerTypeChanged(ESBZControllerUIType Type);
    
    UFUNCTION(BlueprintCallable)
    void OnActionPanelInteraction(const FName Action, ESBZButtonInputType InputType);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClosePopup(bool bIsCritical);
    
};

