#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZMarkerSingleWidget.generated.h"

class USBZUIMarkerSingle;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMarkerSingleWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZUIMarkerSingle* Marker;
    
public:
    USBZMarkerSingleWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZUIMarkerSingle* GetMarker() const;
    
};

