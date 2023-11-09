#pragma once
#include "CoreMinimal.h"
#include "SBZDamageDealtInfo.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZDamageDealtInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHeadshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHitWeakPoint;
    
    FSBZDamageDealtInfo();
};

