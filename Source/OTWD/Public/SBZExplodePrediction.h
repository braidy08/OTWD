#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZHurtReactionPrediction -FallbackName=SBZHurtReactionPrediction
#include "SBZExplodePrediction.generated.h"

class ASBZCharacter;

USTRUCT(BlueprintType)
struct FSBZExplodePrediction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionPrediction HurtReaction;
    
    OTWD_API FSBZExplodePrediction();
};

