#pragma once
#include "CoreMinimal.h"
#include "SBZOnlineMatchmakingParams.h"
#include "SBZStateMachineData.h"
#include "SBZStateMachineDataMatchmaking.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineDataMatchmaking : public USBZStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnlineMatchmakingParams Params;
    
    USBZStateMachineDataMatchmaking();
};

