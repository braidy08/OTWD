#pragma once
#include "CoreMinimal.h"
#include "SBZGrappleClientShovePrediction.generated.h"

class UAnimInstance;
class UAnimMontage;

USTRUCT(BlueprintType)
struct FSBZGrappleClientShovePrediction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    STARBREEZE_API FSBZGrappleClientShovePrediction();
};

