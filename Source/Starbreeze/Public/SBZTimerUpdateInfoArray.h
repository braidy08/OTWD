#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
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

