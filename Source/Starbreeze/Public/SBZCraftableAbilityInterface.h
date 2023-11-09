#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "SBZCraftableAbilityInterface.generated.h"

class UGameplayAbility;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class STARBREEZE_API USBZCraftableAbilityInterface : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZCraftableAbilityInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual TSubclassOf<UGameplayAbility> GetCraftableAbility() PURE_VIRTUAL(GetCraftableAbility, return NULL;);
    
};

