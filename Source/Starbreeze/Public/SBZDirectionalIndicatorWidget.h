#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZDirectionalIndicatorWidget.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZDirectionalIndicatorWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideFov;
    
public:
    USBZDirectionalIndicatorWidget();
    UFUNCTION(BlueprintCallable)
    void SetRotationPanel(UCanvasPanel* Panel);
    
    UFUNCTION(BlueprintCallable)
    void SetImagePanel(UCanvasPanel* Panel);
    
};

