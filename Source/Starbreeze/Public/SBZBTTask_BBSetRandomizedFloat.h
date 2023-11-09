#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBTTask_BBSetRandomizedBase.h"
#include "SBZBTTask_BBSetRandomizedFloat.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBSetRandomizedFloat : public USBZBTTask_BBSetRandomizedBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Interval;
    
    USBZBTTask_BBSetRandomizedFloat();
};

