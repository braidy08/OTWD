#pragma once
#include "CoreMinimal.h"
#include "SBZBTTask_BBSetBase.h"
#include "SBZBTTask_BBSetEQS.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBSetEQS : public USBZBTTask_BBSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    USBZBTTask_BBSetEQS();
};

