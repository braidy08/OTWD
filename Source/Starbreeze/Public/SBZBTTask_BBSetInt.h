#pragma once
#include "CoreMinimal.h"
#include "SBZBTTask_BBSetBase.h"
#include "SBZBTTask_BBSetInt.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBSetInt : public USBZBTTask_BBSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    USBZBTTask_BBSetInt();
};

