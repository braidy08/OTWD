#pragma once
#include "CoreMinimal.h"
#include "SBZFactionNameHelper.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZFactionNameHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FactionName;
    
    FSBZFactionNameHelper();
};

