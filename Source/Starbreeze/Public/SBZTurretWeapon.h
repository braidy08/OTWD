#pragma once
#include "CoreMinimal.h"
#include "SBZRangedWeapon.h"
#include "SBZTurretWeapon.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZTurretWeapon : public ASBZRangedWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasInfiniteAmmo;
    
    ASBZTurretWeapon();
};

