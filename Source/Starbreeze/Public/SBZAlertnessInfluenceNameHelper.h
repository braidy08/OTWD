#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessInfluenceNameHelper.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlertnessInfluenceNameHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InfluenceName;
    
    FSBZAlertnessInfluenceNameHelper();
};

