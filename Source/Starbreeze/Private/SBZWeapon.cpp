#include "SBZWeapon.h"
#include "AkComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "AbilitySystemComponent.h"
#include "SBZModularMeshComponent.h"
#include "SBZWeaponAttributeSet.h"

void ASBZWeapon::UpdateWeaponNetDormancy() {
}

void ASBZWeapon::OnWeaponInstigatorChanged_Implementation() {
}

void ASBZWeapon::OnWeaponAssetsLoaded_Implementation() {
}

void ASBZWeapon::OnModularBuilderComponentSpawningFinished() {
}

ESBZWeaponSlotType ASBZWeapon::GetWeaponSlotType(TSoftClassPtr<ASBZWeapon> WeaponClassPtr) {
    return ESBZWeaponSlotType::Primary;
}

TMap<USBZWeaponPartSlot*, FSBZWeaponSlotConfiguration> ASBZWeapon::GetWeaponSlotsConfiguration(TSoftClassPtr<ASBZWeapon> WeaponClassPtr) {
    return TMap<USBZWeaponPartSlot*, FSBZWeaponSlotConfiguration>();
}

FText ASBZWeapon::GetWeaponDisplayName(TSoftClassPtr<ASBZWeapon> WeaponClassPtr) {
    return FText::GetEmpty();
}

ASBZWeapon::ASBZWeapon() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->bCanUsePrimaryAttack = true;
    this->bCanUseSecondaryAttack = true;
    this->WeaponBaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponBaseMesh"));
    this->StaticShadowMesh1P = NULL;
    this->WeaponBaseStaticMesh = NULL;
    this->WeaponBaseSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponBaseSkeletalMesh"));
    this->ModularBuilderComponent = CreateDefaultSubobject<USBZModularMeshComponent>(TEXT("ModularBuilderComponent"));
    this->AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->WeaponAttributeSet = CreateDefaultSubobject<USBZWeaponAttributeSet>(TEXT("SBZWeaponAttributeSet"));
    this->bIsAIWeapon = false;
    this->WeaponData = NULL;
    this->bLoadAssetsOnConstruction = true;
    this->bUseJammedIK = false;
    this->PowerLevel = 0;
    this->PowerRangeMaximum0 = 0;
    this->bUseStaticBaseMesh = false;
    this->AimAssistRegular = NULL;
    this->AimAssistADS = NULL;
    this->FirstPersonPlayerGeneralAnimations = NULL;
    this->ThirdPersonPlayerGeneralAnimations = NULL;
    this->FirstPersonWeaponGeneralAnimations = NULL;
    this->ThirdPersonWeaponGeneralAnimations = NULL;
    this->ThirdPersonPlayerPedestalAnimations = NULL;
    this->ThirdPersonWeaponPedestalAnimations = NULL;
    this->MaterialParametersSchematic = NULL;
    this->EquipEvent = NULL;
    this->UnequipEvent = NULL;
    this->JamEvent = NULL;
    this->EmptyEvent = NULL;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
}

