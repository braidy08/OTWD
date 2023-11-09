#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ActionButtonClickedDelegate.h"
#include "SBZActionButtonWidget.generated.h"

class UButton;
class USBZActionImageWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZActionButtonWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionButtonClicked OnActionButtonClicked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* ClickButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZActionImageWidget* ActionImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText ButtonLabel;
    
public:
    USBZActionButtonWidget();
    UFUNCTION(BlueprintCallable)
    void UnbindInput();
    
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UButton* ButtonWidget, USBZActionImageWidget* ActionImageWidget, UTextBlock* ButtonTextWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetupData(const FName& ActionName, const FText& ButtonLabelText);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInputPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
};

