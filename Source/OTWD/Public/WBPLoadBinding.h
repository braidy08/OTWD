#pragma once
#include "CoreMinimal.h"
#include "WBPLoadedParams.h"
#include "WBPLoadBinding.generated.h"

USTRUCT(BlueprintType)
struct FWBPLoadBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWBPLoadedParams RequestParams;
    
    OTWD_API FWBPLoadBinding();
};

