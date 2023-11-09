#pragma once
#include "CoreMinimal.h"
#include "SBZHurtReactionPrediction.h"
#include "SBZGrappleShovePrediction.generated.h"

class AActor;
class ASBZCharacter;

USTRUCT(BlueprintType)
struct FSBZGrappleShovePrediction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZCharacter> Character;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionPrediction HurtReaction;
    
    STARBREEZE_API FSBZGrappleShovePrediction();
};

