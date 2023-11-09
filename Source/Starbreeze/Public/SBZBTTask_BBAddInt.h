#pragma once
#include "CoreMinimal.h"
#include "SBZBTTask_BBAddBase.h"
#include "SBZBTTask_BBAddInt.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBAddInt : public USBZBTTask_BBAddBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    USBZBTTask_BBAddInt();
};

