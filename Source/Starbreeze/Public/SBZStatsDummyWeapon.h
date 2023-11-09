#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SBZStatsDummyWeapon.generated.h"

class UAbilitySystemComponent;
class USBZMeleeAttributeSet;
class USBZRangedWeaponAttributeSet;
class USBZWeaponAttributeSet;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZStatsDummyWeapon : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZWeaponAttributeSet* WeaponAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZRangedWeaponAttributeSet* RangedWeaponAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMeleeAttributeSet* MeleeAttributeSet;
    
public:
    ASBZStatsDummyWeapon();
};

