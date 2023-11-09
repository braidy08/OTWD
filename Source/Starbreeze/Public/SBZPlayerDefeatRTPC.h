#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerDefeatRTPC.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerDefeatRTPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Max;
    
    FSBZPlayerDefeatRTPC();
};

