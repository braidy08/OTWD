#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZStealthIndicatorWidget.generated.h"

class UCanvasPanel;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZStealthIndicatorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBZStealthIndicatorWidget();
    UFUNCTION(BlueprintCallable)
    void SetRotationPanel(UCanvasPanel* Panel);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressPanel(UCanvasPanel* Panel);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressMaterial(UImage* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseImage(UImage* Image);
    
};

