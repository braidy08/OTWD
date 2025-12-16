#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "SBZDirectionalIndicatorWidget.generated.h"

class APawn;
class APlayerController;
class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZDirectionalIndicatorWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideFov;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RotationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ImagePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* OwningPawn;
    
public:
    USBZDirectionalIndicatorWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIndicatorVisuals(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void SetRotationPanel(UCanvasPanel* Panel);
    
    UFUNCTION(BlueprintCallable)
    void SetImagePanel(UCanvasPanel* Panel);
    
};

