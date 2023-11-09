#pragma once
#include "CoreMinimal.h"
#include "SBZAnalyticsProviderInterface.h"
#include "SBZFileAnalyticsProvider.generated.h"

UCLASS(Blueprintable)
class SBZANALYTICS_API USBZFileAnalyticsProvider : public USBZAnalyticsProviderInterface {
    GENERATED_BODY()
public:
    USBZFileAnalyticsProvider();
};

