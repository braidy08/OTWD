#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "GameplayTagContainer.h"
#include "SBZGameplayAbility.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZGameplayAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CancelAbilitiesOnActivationAttemptTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CancelOnOwnerTagGranted;
    
public:
    USBZGameplayAbility();
};

