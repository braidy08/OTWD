#pragma once
#include "CoreMinimal.h"
#include "SBZBTTask_BBSetBase.h"
#include "SBZBTTask_BBSetName.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBSetName : public USBZBTTask_BBSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Value;
    
    USBZBTTask_BBSetName();
};

