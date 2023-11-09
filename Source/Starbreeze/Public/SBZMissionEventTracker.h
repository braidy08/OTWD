#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZMissionEventTracker.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZMissionEventTracker : public UObject {
    GENERATED_BODY()
public:
    USBZMissionEventTracker();
    UFUNCTION(BlueprintCallable)
    void HandleReturnedToMainMenu();
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionStart();
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionEnd();
    
};

