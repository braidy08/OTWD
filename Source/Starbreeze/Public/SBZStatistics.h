#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZStatistics.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStatistics : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StartTime;
    
public:
    USBZStatistics();
};

