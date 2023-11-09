#pragma once
#include "CoreMinimal.h"
#include "SBZBTTask_BBAddBase.h"
#include "SBZBTTask_BBAddFloat.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBAddFloat : public USBZBTTask_BBAddBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    USBZBTTask_BBAddFloat();
};

