#pragma once
#include "CoreMinimal.h"
#include "SBZGameTimeSince.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGameTimeSince {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    FSBZGameTimeSince();
};

