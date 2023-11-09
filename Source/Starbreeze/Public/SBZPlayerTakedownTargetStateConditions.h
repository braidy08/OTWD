#pragma once
#include "CoreMinimal.h"
#include "ESBZAIHurtMontageType.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZPlayerTakedownTargetStateConditions.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerTakedownTargetStateConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZAIHurtMontageType> RequiredHurtTypes;
    
    FSBZPlayerTakedownTargetStateConditions();
};

