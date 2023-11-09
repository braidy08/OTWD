#pragma once
#include "CoreMinimal.h"
#include "AIAimingOffset.generated.h"

USTRUCT(BlueprintType)
struct FAIAimingOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    STARBREEZE_API FAIAimingOffset();
};

