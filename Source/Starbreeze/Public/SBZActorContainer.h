#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZObjectContainer.h"
#include "SBZActorContainer.generated.h"

class AActor;

UCLASS(Blueprintable)
class STARBREEZE_API USBZActorContainer : public USBZObjectContainer {
    GENERATED_BODY()
public:
    USBZActorContainer();
private:
    UFUNCTION(BlueprintCallable)
    void OnActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

