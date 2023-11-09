#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpec.h"
#include "SBZAbilityCombo.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAbilityCombo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle UseAbilityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayAbility* UseAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle CraftAbilityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayAbility* CraftAbility;
    
    FSBZAbilityCombo();
};

