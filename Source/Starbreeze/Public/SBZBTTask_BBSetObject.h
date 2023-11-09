#pragma once
#include "CoreMinimal.h"
#include "SBZBTTask_BBSetBase.h"
#include "SBZBTTask_BBSetObject.generated.h"

class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBSetObject : public USBZBTTask_BBSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Value;
    
    USBZBTTask_BBSetObject();
};

