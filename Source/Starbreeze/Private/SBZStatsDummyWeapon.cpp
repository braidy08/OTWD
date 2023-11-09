#include "SBZStatsDummyWeapon.h"
#include "AbilitySystemComponent.h"
#include "SBZMeleeAttributeSet.h"
#include "SBZRangedWeaponAttributeSet.h"
#include "SBZWeaponAttributeSet.h"

ASBZStatsDummyWeapon::ASBZStatsDummyWeapon() {
    this->AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->WeaponAttributeSet = CreateDefaultSubobject<USBZWeaponAttributeSet>(TEXT("SBZWeaponAttributeSet"));
    this->RangedWeaponAttributeSet = CreateDefaultSubobject<USBZRangedWeaponAttributeSet>(TEXT("SBZRangedWeaponAttributeSet"));
    this->MeleeAttributeSet = CreateDefaultSubobject<USBZMeleeAttributeSet>(TEXT("SBZMeleeAttributeSet"));
}

