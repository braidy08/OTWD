#pragma once
#include "CoreMinimal.h"
#include "SBZHurtReactionPrediction.h"
#include "SBZLungePrediction.generated.h"

class ASBZCharacter;

USTRUCT(BlueprintType)
struct FSBZLungePrediction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionPrediction TargetHurtReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionPrediction OwnHurtReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LungeDistance;
    
    OTWD_API FSBZLungePrediction();
};

