#pragma once
#include "CoreMinimal.h"
#include "MontageVarations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FMontageVarations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Variations;
    
    STARBREEZE_API FMontageVarations();
};

