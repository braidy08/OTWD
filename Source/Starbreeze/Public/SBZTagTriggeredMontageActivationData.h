#pragma once
#include "CoreMinimal.h"
#include "SBZTagTriggeredMontageData.h"
#include "SBZTagTriggeredMontageActivationData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZTagTriggeredMontageActivationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTagTriggeredMontageData Activate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTagTriggeredMontageData Deactivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    FSBZTagTriggeredMontageActivationData();
};

