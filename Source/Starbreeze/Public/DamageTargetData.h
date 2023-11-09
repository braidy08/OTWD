#pragma once
#include "CoreMinimal.h"
#include "DamageTargetData.generated.h"

class USBZGameProperty;

USTRUCT(BlueprintType)
struct FDamageTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USBZGameProperty> TargetProperty;
    
    STARBREEZE_API FDamageTargetData();
};

