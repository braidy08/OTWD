#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "SBZBTTask_SwitchWeapon.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTTask_SwitchWeapon : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponTag;
    
    USBZBTTask_SwitchWeapon();
};

