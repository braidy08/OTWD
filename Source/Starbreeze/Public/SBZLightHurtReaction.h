#pragma once
#include "CoreMinimal.h"
#include "SBZHurtReactionDirection.h"
#include "SBZLightHurtReaction.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZLightHurtReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZHurtReactionDirection> BoneMap;
    
    FSBZLightHurtReaction();
};

