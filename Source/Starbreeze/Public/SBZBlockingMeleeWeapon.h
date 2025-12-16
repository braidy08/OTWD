#pragma once
#include "CoreMinimal.h"
#include "SBZMeleeWeapon.h"
#include "Templates/SubclassOf.h"
#include "SBZBlockingMeleeWeapon.generated.h"

class USBZDamageType;

UCLASS(Blueprintable)
class ASBZBlockingMeleeWeapon : public ASBZMeleeWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZDamageType> BlockingDamageTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockingViewAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BlockingViewAngleDot;
    
    ASBZBlockingMeleeWeapon(const FObjectInitializer& ObjectInitializer);

};

