#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessInfluenceIdHelper.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlertnessInfluenceIdHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 InfluenceId;
    
    FSBZAlertnessInfluenceIdHelper();
};

