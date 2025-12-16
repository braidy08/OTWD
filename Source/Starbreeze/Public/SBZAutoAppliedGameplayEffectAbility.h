#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbility -FallbackName=GameplayAbility
#include "Templates/SubclassOf.h"
#include "SBZAutoAppliedGameplayEffectAbility.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAutoAppliedGameplayEffectAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> PossibleGameplayEffects;
    
    USBZAutoAppliedGameplayEffectAbility();

};

