#pragma once
#include "CoreMinimal.h"
#include "SBZDoorReplicatedDatas.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZDoorReplicatedDatas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ActiveBarricadePlankCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    FSBZDoorReplicatedDatas();
};

