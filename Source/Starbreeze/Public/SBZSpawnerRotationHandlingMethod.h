#pragma once
#include "CoreMinimal.h"
#include "ESBZSpawnerRotationMethod.h"
#include "SBZSpawnerRotationHandlingMethod.generated.h"

USTRUCT(BlueprintType)
struct FSBZSpawnerRotationHandlingMethod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumAngleVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSpawnerRotationMethod Method;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadingAngle;
    
    STARBREEZE_API FSBZSpawnerRotationHandlingMethod();
};

