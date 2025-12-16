#include "SBZStatsDummyWeapon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemComponent -FallbackName=AbilitySystemComponent
#include "SBZMeleeAttributeSet.h"
#include "SBZRangedWeaponAttributeSet.h"
#include "SBZWeaponAttributeSet.h"

ASBZStatsDummyWeapon::ASBZStatsDummyWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->WeaponAttributeSet = CreateDefaultSubobject<USBZWeaponAttributeSet>(TEXT("SBZWeaponAttributeSet"));
    this->RangedWeaponAttributeSet = CreateDefaultSubobject<USBZRangedWeaponAttributeSet>(TEXT("SBZRangedWeaponAttributeSet"));
    this->MeleeAttributeSet = CreateDefaultSubobject<USBZMeleeAttributeSet>(TEXT("SBZMeleeAttributeSet"));
}


