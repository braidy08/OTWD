#pragma once
#include "CoreMinimal.h"
#include "SBZMaterialFloatVariable.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZMaterialFloatVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FSBZMaterialFloatVariable();
};

