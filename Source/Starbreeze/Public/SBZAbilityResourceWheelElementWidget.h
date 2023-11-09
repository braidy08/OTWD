#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZAbilityResourceWheelElementWidget.generated.h"

class UCanvasPanel;
class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAbilityResourceWheelElementWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* ResourceIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RotationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* ResourceTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RotationAngle;
    
public:
    USBZAbilityResourceWheelElementWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UImage* ResourceIconWidget, UCanvasPanel* RotationPanelWidget);
    
};

