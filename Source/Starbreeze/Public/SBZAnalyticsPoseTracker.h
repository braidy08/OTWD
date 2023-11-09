#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "SBZAnalyticsPoseTracker.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZAnalyticsPoseTracker : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle SendTimer;
    
public:
    USBZAnalyticsPoseTracker();
};

