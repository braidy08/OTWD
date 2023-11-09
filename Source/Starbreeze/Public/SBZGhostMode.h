#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZGhostMode.generated.h"

UINTERFACE(Blueprintable)
class STARBREEZE_API USBZGhostMode : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZGhostMode : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowGhost(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGhostModeActive(bool bActive);
    
};

