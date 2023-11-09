#pragma once
#include "CoreMinimal.h"
#include "SBZHurtReactionPrediction.h"
#include "ActorMultiHitResult.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorMultiHitResult {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionPrediction HurtReaction;
    
    STARBREEZE_API FActorMultiHitResult();
};

