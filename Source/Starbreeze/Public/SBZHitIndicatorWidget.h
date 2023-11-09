#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "SBZHitIndicatorWidget.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZHitIndicatorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBZHitIndicatorWidget();
    UFUNCTION(BlueprintCallable)
    void SetRotationPanel(UCanvasPanel* Panel);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHitWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHit(const FLinearColor& IndicatorColor);
    
};

