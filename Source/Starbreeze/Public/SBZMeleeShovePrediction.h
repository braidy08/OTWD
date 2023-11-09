#pragma once
#include "CoreMinimal.h"
#include "SBZHurtReactionPrediction.h"
#include "SBZMeleeShovePrediction.generated.h"

class ASBZCharacter;

USTRUCT(BlueprintType)
struct FSBZMeleeShovePrediction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionPrediction HurtReaction;
    
    STARBREEZE_API FSBZMeleeShovePrediction();
};

