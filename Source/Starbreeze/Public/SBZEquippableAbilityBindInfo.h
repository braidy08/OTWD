#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilitySpecHandle -FallbackName=GameplayAbilitySpecHandle
#include "EAbilityInput.h"
#include "EEquippableSlotId.h"
#include "Templates/SubclassOf.h"
#include "SBZEquippableAbilityBindInfo.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct FSBZEquippableAbilityBindInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    EEquippableSlotId ActionSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    EAbilityInput Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> GameplayAbilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle Handle;
    
    STARBREEZE_API FSBZEquippableAbilityBindInfo();
};

