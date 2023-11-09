#pragma once
#include "CoreMinimal.h"
#include "ESBZDoorAttackType.h"
#include "SBZDoorInteractionReplicatedDatas.generated.h"

class ASBZDoor;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZDoorInteractionReplicatedDatas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZDoor* Door;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDoorAttackType AttackType;
    
    FSBZDoorInteractionReplicatedDatas();
};

