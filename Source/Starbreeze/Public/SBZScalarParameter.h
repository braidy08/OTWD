#pragma once
#include "CoreMinimal.h"
#include "SBZScalarParameter.generated.h"

USTRUCT(BlueprintType)
struct FSBZScalarParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    STARBREEZE_API FSBZScalarParameter();
};

