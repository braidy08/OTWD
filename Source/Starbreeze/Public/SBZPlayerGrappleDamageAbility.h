#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZPlayerGrappleDamageAbility.generated.h"

class ASBZPlayerCharacter;
class UGameplayEffect;

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlayerGrappleDamageAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameplayEffect* DamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwningPlayer;
    
public:
    USBZPlayerGrappleDamageAbility();
};

