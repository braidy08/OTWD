#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZBaseLoadingSubWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZBaseLoadingSubWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBZBaseLoadingSubWidget();
    UFUNCTION(BlueprintCallable)
    void SetCleanOnTravel(bool CleanOnTravel);
    
};

