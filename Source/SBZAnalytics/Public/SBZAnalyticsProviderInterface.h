#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZAnalyticsProviderInterface.generated.h"

class USBZAnalyticsGameObserverInterface;

UCLASS(Blueprintable)
class SBZANALYTICS_API USBZAnalyticsProviderInterface : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAnalyticsGameObserverInterface* GameObserver;
    
public:
    USBZAnalyticsProviderInterface();
};

