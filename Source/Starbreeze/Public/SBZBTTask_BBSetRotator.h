#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBTTask_BBSetBase.h"
#include "SBZBTTask_BBSetRotator.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBSetRotator : public USBZBTTask_BBSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator Value;
    
    USBZBTTask_BBSetRotator();
};

