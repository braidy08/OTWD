#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZMarkerBaseWidget.generated.h"

class USBZUIMarkerBase;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZMarkerBaseWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZUIMarkerBase* Marker;
    
public:
    USBZMarkerBaseWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZUIMarkerBase* GetMarker() const;
    
};

