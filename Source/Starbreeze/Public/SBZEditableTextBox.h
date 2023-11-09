#pragma once
#include "CoreMinimal.h"
#include "Components/EditableTextBox.h"
#include "SBZEditableTextBox.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZEditableTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
    USBZEditableTextBox();
    UFUNCTION(BlueprintCallable)
    void SetSelectedText(int32 SelectionBeginning, int32 SelectionEnd);
    
};

