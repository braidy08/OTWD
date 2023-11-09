#pragma once
#include "CoreMinimal.h"
#include "SBZHurtReactionPrediction.h"
#include "SBZDoorShovePrediction.generated.h"

class ASBZCharacter;

USTRUCT(BlueprintType)
struct FSBZDoorShovePrediction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionPrediction HurtReaction;
    
    STARBREEZE_API FSBZDoorShovePrediction();
};

