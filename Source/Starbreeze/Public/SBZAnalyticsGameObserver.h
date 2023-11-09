#pragma once
#include "CoreMinimal.h"
#include "SBZAnalyticsGameObserverInterface.h"
#include "SBZAnalyticsGameObserver.generated.h"

UCLASS(Blueprintable)
class USBZAnalyticsGameObserver : public USBZAnalyticsGameObserverInterface {
    GENERATED_BODY()
public:
    USBZAnalyticsGameObserver();
protected:
    UFUNCTION(BlueprintCallable)
    void OnStateLeft(FName StateName);
    
};

