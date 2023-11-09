#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectCustomApplicationRequirement.h"
#include "Templates/SubclassOf.h"
#include "SBZIsAbilityActiveApplicationRequirement.generated.h"

class UGameplayAbility;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZIsAbilityActiveApplicationRequirement : public UGameplayEffectCustomApplicationRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertResult;
    
public:
    USBZIsAbilityActiveApplicationRequirement();
};

