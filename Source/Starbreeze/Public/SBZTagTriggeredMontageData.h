#pragma once
#include "CoreMinimal.h"
#include "SBZTagTriggeredMontageData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZTagTriggeredMontageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomOffset;
    
    FSBZTagTriggeredMontageData();
};

