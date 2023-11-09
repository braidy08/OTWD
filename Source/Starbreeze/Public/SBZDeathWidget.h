#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZDeathWidget.generated.h"

class ASBZPlayerState;
class UPanelWidget;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZDeathWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* MinText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* SecsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* TextPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* OwnerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PrevTime;
    
public:
    USBZDeathWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UTextBlock* MinTextWidget, UTextBlock* SecsTextWidget, UPanelWidget* TextPanelWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetupAnimations(UWidgetAnimation* FadeInAnimation);
    
    UFUNCTION(BlueprintCallable)
    void SetOwner(ASBZPlayerState* OwnerPlayerState);
    
};

