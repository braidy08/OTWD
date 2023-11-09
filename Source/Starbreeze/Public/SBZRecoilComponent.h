#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZRecoilComponent.generated.h"

class ASBZRangedWeapon;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZRecoilComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRangedWeapon* Weapon;
    
public:
    USBZRecoilComponent();
};

