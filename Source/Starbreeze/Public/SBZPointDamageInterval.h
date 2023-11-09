#pragma once
#include "CoreMinimal.h"
#include "SBZPointDamageInterval.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPointDamageInterval {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageInterval;
    
    FSBZPointDamageInterval();
};

