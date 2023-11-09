#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbilityThrow.h"
#include "Templates/SubclassOf.h"
#include "SBZCraftableThrowAbility.generated.h"

class UGameplayAbility;

UCLASS(Blueprintable)
class STARBREEZE_API USBZCraftableThrowAbility : public USBZGameplayAbilityThrow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> CraftingAbility;
    
    USBZCraftableThrowAbility();
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UGameplayAbility> GetCraftableAbility();
    
};

