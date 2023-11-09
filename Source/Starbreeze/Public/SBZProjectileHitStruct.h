#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZGameEventStructBase.h"
#include "SBZProjectileHitStruct.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZProjectileHitStruct : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid AttackGuid;
    
    FSBZProjectileHitStruct();
};

