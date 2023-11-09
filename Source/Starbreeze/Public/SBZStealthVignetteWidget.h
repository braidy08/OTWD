#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZStealthVignetteWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZStealthVignetteWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBZStealthVignetteWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStealthBroken();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStealthActivated();
    
};

