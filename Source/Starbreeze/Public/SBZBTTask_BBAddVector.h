#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBTTask_BBAddBase.h"
#include "SBZBTTask_BBAddVector.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBAddVector : public USBZBTTask_BBAddBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    USBZBTTask_BBAddVector();
};

