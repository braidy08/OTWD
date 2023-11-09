#pragma once
#include "CoreMinimal.h"
#include "SBZBTTask_BBSetBase.h"
#include "SBZBTTask_BBSetFloat.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBSetFloat : public USBZBTTask_BBSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    USBZBTTask_BBSetFloat();
};

