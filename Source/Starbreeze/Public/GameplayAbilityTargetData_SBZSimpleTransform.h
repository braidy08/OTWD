#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilityTargetData_SBZSimpleTransform.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FGameplayAbilityTargetData_SBZSimpleTransform : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TargetTransform;
    
    FGameplayAbilityTargetData_SBZSimpleTransform();
};

