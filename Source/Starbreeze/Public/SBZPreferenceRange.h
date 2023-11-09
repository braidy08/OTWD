#pragma once
#include "CoreMinimal.h"
#include "SBZPreferenceRange.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPreferenceRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Minimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Preferred;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Maximum;
    
    FSBZPreferenceRange();
};

