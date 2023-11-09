#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZHealthVignetteWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZHealthVignetteWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBZHealthVignetteWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamaged(float HealthPercent);
    
};

