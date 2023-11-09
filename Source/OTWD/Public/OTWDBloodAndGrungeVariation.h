#pragma once
#include "CoreMinimal.h"
#include "OTWDBloodVariation.h"
#include "OTWDGrungeVariation.h"
#include "OTWDBloodAndGrungeVariation.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDBloodAndGrungeVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDBloodVariation Blood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDGrungeVariation Grunge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PanY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tiling;
    
    FOTWDBloodAndGrungeVariation();
};

