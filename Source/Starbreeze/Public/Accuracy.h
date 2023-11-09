#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Accuracy.generated.h"

USTRUCT(BlueprintType)
struct FAccuracy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Accuracy;
    
    STARBREEZE_API FAccuracy();
};

