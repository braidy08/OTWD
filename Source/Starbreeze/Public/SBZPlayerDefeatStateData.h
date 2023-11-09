#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerDefeatCauseOfDefeat.h"
#include "ESBZPlayerDefeatState.h"
#include "SBZPlayerDefeatStateData.generated.h"

class ASBZAICharacter;

USTRUCT(BlueprintType)
struct FSBZPlayerDefeatStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPlayerDefeatState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PinningEnemyCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* FirstPinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZAICharacter* StrugglingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZPlayerDefeatCauseOfDefeat CauseOfDefeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefeatsCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPending;
    
    STARBREEZE_API FSBZPlayerDefeatStateData();
};

