#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZHUDWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STARBREEZE_API USBZHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USBZHUDWidget();
};

