#pragma once
#include "CoreMinimal.h"
#include "SBZMinMaxAmountAmmo.generated.h"

USTRUCT(BlueprintType)
struct FSBZMinMaxAmountAmmo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoPickupMinAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmmoPickupMaxAmount;
    
    STARBREEZE_API FSBZMinMaxAmountAmmo();
};

