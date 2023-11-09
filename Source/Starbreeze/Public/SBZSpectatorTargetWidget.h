#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZSpectatorTargetWidget.generated.h"

class AActor;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZSpectatorTargetWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBZSpectatorTargetWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetTargetText(UTextBlock* TextWidget);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSpectateTargetChangedEventHandler(AActor* Target);
    
};

