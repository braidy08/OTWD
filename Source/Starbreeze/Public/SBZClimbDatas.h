#pragma once
#include "CoreMinimal.h"
#include "SBZClimbDatas.generated.h"

class ASBZLadder;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZClimbDatas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClimbing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZLadder* CurrentLadder;
    
    FSBZClimbDatas();
};

