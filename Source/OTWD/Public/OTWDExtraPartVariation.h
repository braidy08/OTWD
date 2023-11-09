#pragma once
#include "CoreMinimal.h"
#include "OTWDExtraPartVariation.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDExtraPartVariation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Index1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Index2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Index3;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Index4;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Index5;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Index6;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Index7;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Index8;
    
    FOTWDExtraPartVariation();
};

