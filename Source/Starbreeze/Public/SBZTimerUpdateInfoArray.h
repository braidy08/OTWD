#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SBZTimerUpdateInfo.h"
#include "SBZTimerUpdateInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZTimerUpdateInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZTimerUpdateInfo> Items;
    
    STARBREEZE_API FSBZTimerUpdateInfoArray();
};

