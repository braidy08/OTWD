#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OTWDBloodVariation.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDBloodVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Roughness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 StainIndex1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 StainIndex2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 StainIndex3;
    
    FOTWDBloodVariation();
};

