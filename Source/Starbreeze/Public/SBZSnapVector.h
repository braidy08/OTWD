#pragma once
#include "CoreMinimal.h"
#include "ESBZPivotSnapSideX.h"
#include "ESBZPivotSnapSideY.h"
#include "ESBZPivotSnapSideZ.h"
#include "SBZSnapVector.generated.h"

USTRUCT(BlueprintType)
struct FSBZSnapVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPivotSnapSideX X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPivotSnapSideY Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPivotSnapSideZ Z;
    
    STARBREEZE_API FSBZSnapVector();
};

