#pragma once
#include "CoreMinimal.h"
#include "SBZRebindableSpecification.generated.h"

USTRUCT(BlueprintType)
struct FSBZRebindableSpecification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnifiedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlusAxis;
    
    STARBREEZE_API FSBZRebindableSpecification();
};

