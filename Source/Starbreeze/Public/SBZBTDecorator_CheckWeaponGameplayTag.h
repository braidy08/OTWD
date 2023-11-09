#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SBZBTDecorator_CheckWeaponGameplayTag.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_CheckWeaponGameplayTag : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayContainerMatchType TagsToMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    USBZBTDecorator_CheckWeaponGameplayTag();
};

