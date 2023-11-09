#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "PawnCategoryLimit.generated.h"

class USBZAICharacterSchematic;

USTRUCT(BlueprintType)
struct FPawnCategoryLimit {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAICharacterSchematic* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ForceLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve PoolLimit;
    
public:
    STARBREEZE_API FPawnCategoryLimit();
};

