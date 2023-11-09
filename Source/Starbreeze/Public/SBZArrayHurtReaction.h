#pragma once
#include "CoreMinimal.h"
#include "SBZArrayHurtReaction.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZArrayHurtReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimMontage>> MontageArray;
    
    FSBZArrayHurtReaction();
};

