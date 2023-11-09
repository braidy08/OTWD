#pragma once
#include "CoreMinimal.h"
#include "SBZAnalyticsProviderInterface.h"
#include "SBZPlayFabAnalyticsProvider.generated.h"

UCLASS(Blueprintable)
class SBZANALYTICS_API USBZPlayFabAnalyticsProvider : public USBZAnalyticsProviderInterface {
    GENERATED_BODY()
public:
    USBZPlayFabAnalyticsProvider();
};

