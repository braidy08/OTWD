#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBTTask_BBAddBase.h"
#include "SBZBTTask_BBAddRotator.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBAddRotator : public USBZBTTask_BBAddBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Value;
    
    USBZBTTask_BBAddRotator();
};

