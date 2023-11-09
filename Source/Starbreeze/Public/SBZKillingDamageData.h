#pragma once
#include "CoreMinimal.h"
#include "SBZKillingDamageData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZKillingDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAmount;
    
    FSBZKillingDamageData();
};

