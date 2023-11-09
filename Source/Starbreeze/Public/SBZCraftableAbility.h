#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "SBZCraftableAbility.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZCraftableAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> CraftingAbility;
    
    USBZCraftableAbility();
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UGameplayAbility> GetCraftableAbility();
    
};

