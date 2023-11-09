#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBTTask_BBSetBase.h"
#include "SBZBTTask_BBSetVector.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_BBSetVector : public USBZBTTask_BBSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetAsInvalidLocation;
    
    USBZBTTask_BBSetVector();
};

