#pragma once
#include "CoreMinimal.h"
#include "SBZDamageMemoryData.generated.h"

USTRUCT(BlueprintType)
struct FSBZDamageMemoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAmount;
    
    STARBREEZE_API FSBZDamageMemoryData();
};

