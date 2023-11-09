#pragma once
#include "CoreMinimal.h"
#include "SBZMaterialReplacementDefinition.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSBZMaterialReplacementDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Original;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Replacement;
    
    STARBREEZE_API FSBZMaterialReplacementDefinition();
};

