#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZLoadingStallTimer.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZLoadingStallTimer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadingStallTimeout;
    
public:
    USBZLoadingStallTimer();
    UFUNCTION(BlueprintCallable)
    void SetPlayerStuck();
    
};

