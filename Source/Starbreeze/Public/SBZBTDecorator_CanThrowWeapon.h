#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "GameplayTagContainer.h"
#include "SBZBTDecorator_CanThrowWeapon.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZBTDecorator_CanThrowWeapon : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ThrowWeaponTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckWeaponReady;
    
    USBZBTDecorator_CanThrowWeapon();
};

