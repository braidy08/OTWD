#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OTWDZombieIndicatorWidget.generated.h"

class UBorder;
class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UOTWDZombieIndicatorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOpacity;
    
    UOTWDZombieIndicatorWidget();
    UFUNCTION(BlueprintCallable)
    void SetRotationPanel(UCanvasPanel* Panel);
    
    UFUNCTION(BlueprintCallable)
    void SetOpacityBorder(UBorder* Border);
    
    UFUNCTION(BlueprintCallable)
    void SetImagePanel(UCanvasPanel* Panel);
    
};

