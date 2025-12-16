#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbility -FallbackName=GameplayAbility
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

