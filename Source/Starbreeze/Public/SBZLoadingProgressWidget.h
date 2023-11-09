#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZLoadingProgressWidget.generated.h"

class UMaterialInstanceDynamic;
class UPanelWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZLoadingProgressWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* PercentText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ProgressMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* ContainerWidget;
    
public:
    USBZLoadingProgressWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UTextBlock* PercentTextWidget, UMaterialInstanceDynamic* ProgressMaterialInstance, UPanelWidget* InContainerWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldProgressUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnProgressUpdated(float Progress);
    
};

