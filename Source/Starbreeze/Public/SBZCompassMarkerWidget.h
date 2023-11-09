#pragma once
#include "CoreMinimal.h"
#include "SBZGenericImageWidget.h"
#include "SBZCompassMarkerWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZCompassMarkerWidget : public USBZGenericImageWidget {
    GENERATED_BODY()
public:
    USBZCompassMarkerWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateDistance(float Distance);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceText(UTextBlock* DistanceText);
    
};

