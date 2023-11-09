#pragma once
#include "CoreMinimal.h"
#include "SBZAIStanceNameHelper.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAIStanceNameHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StanceName;
    
    FSBZAIStanceNameHelper();
};

