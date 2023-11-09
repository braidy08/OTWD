#pragma once
#include "CoreMinimal.h"
#include "SBZAIStanceIdHelper.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAIStanceIdHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 StanceId;
    
    FSBZAIStanceIdHelper();
};

