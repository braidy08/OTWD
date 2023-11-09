#pragma once
#include "CoreMinimal.h"
#include "SBZAutoPickUpItem.h"
#include "SBZGameplayEffectData.h"
#include "SBZAutoPickUpItemGameplayEffect.generated.h"

class UAbilitySystemComponent;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZAutoPickUpItemGameplayEffect : public ASBZAutoPickUpItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayEffectData> GameplayLoot;
    
public:
    ASBZAutoPickUpItemGameplayEffect();
    UFUNCTION(BlueprintCallable)
    bool ApplyPickUpGameplayEffects(UAbilitySystemComponent* AbilitySystem);
    
};

