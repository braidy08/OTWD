#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorActionType.h"
#include "ESBZDoorInteractionSide.h"
#include "ESBZDoorStateType.h"
#include "SBZDoorLocalDatas.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZDoorLocalDatas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDoorStateType CurrentStateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDoorActionType CurrentActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDoorActionType PendingActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDoorInteractionSide CurrentInteractorSide;
    
    FSBZDoorLocalDatas();
};

