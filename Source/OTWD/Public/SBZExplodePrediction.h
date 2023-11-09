#pragma once
#include "CoreMinimal.h"
#include "SBZHurtReactionPrediction.h"
#include "SBZExplodePrediction.generated.h"

class ASBZCharacter;

USTRUCT(BlueprintType)
struct FSBZExplodePrediction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionPrediction HurtReaction;
    
    OTWD_API FSBZExplodePrediction();
};

