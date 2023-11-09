#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZGameEventStructBase.h"
#include "SBZAttackEndStruct.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAttackEndStruct : public FSBZGameEventStructBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid AttackGuid;
    
    FSBZAttackEndStruct();
};

