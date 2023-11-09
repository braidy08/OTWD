#pragma once
#include "CoreMinimal.h"
#include "MutableFloatRegisteredValue.generated.h"

USTRUCT(BlueprintType)
struct FMutableFloatRegisteredValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RegisteredIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    STARBREEZE_API FMutableFloatRegisteredValue();
};

