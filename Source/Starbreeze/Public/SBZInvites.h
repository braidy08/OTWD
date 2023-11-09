#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZButtonInputType.h"
#include "SBZInvites.generated.h"

class USBZPopupWidget;

UCLASS(Blueprintable)
class STARBREEZE_API USBZInvites : public UObject {
    GENERATED_BODY()
public:
    USBZInvites();
private:
    UFUNCTION(BlueprintCallable)
    void HandleStateEnteredPlayTogether(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    void HandleStateEnteredInvite(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    void HandlePopupInput(const FName ActionName, ESBZButtonInputType Type, USBZPopupWidget* WidgetPointer);
    
};

