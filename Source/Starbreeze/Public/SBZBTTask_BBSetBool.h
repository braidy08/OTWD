#pragma once
#include "CoreMinimal.h"
#include "SBZBTTask_BBSetBase.h"
#include "SBZBTTask_BBSetBool.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBSetBool : public USBZBTTask_BBSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    USBZBTTask_BBSetBool();
};

