#pragma once
#include "CoreMinimal.h"
#include "SBZThrowableProjectileConfig.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZThrowableProjectileConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxThrowForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinThrowForce;
    
    FSBZThrowableProjectileConfig();
};

