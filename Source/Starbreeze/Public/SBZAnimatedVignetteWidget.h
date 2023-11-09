#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZAnimatedVignetteWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZAnimatedVignetteWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBZAnimatedVignetteWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClear();
    
};

