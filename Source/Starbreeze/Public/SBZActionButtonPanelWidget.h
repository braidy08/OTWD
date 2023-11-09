#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ActionPanelInteractionDelegate.h"
#include "ESBZButtonInputType.h"
#include "Templates/SubclassOf.h"
#include "SBZActionButtonPanelWidget.generated.h"

class UPanelWidget;
class USBZActionButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZActionButtonPanelWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionPanelInteraction OnActionPanelInteraction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZActionButtonWidget> ActionButtonBlueprint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* ButtonPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ActionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FText> ButtonLabels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZActionButtonWidget*> ActionButtons;
    
public:
    USBZActionButtonPanelWidget();
    UFUNCTION(BlueprintCallable)
    void UnbindInput();
    
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UPanelWidget* ButtonPanelWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetupData(const TArray<FName>& InActionNames, const TArray<FText>& InButtonLabels);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActionButtonClicked(const FName Action, ESBZButtonInputType InputType);
    
};

