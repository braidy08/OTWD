#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDramaEvent.h"
#include "DramaEventData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FDramaEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDramaEvent Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ValidDramaRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitToValidRange;
    
    FDramaEventData();
};

