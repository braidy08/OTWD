#include "SBZWeapon.h"
#include "AkComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemComponent -FallbackName=AbilitySystemComponent
#include "SBZModularMeshComponent.h"
#include "SBZWeaponAttributeSet.h"

ASBZWeapon::ASBZWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->bCanUsePrimaryAttack = true;
    this->bCanUseSecondaryAttack = true;
    this->WeaponBaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponBaseMesh"));
    this->StaticShadowMesh1P = NULL;
    this->WeaponBaseStaticMesh = NULL;
    this->WeaponBaseSkeletalMesh = (USkeletalMeshComponent*)WeaponBaseMesh;
    this->ModularBuilderComponent = CreateDefaultSubobject<USBZModularMeshComponent>(TEXT("ModularBuilderComponent"));
    this->AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->WeaponAttributeSet = CreateDefaultSubobject<USBZWeaponAttributeSet>(TEXT("SBZWeaponAttributeSet"));
    this->bIsAIWeapon = false;
    this->WeaponData = NULL;
    this->bLoadAssetsOnConstruction = true;
    this->bUseJammedIK = false;
    this->PowerLevel = 0;
    this->PowerRangeMaximum0 = 0;
    this->PowerRangeMaximum1 = 0;
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
    this->AkComponent->SetupAttachment(RootComponent);
    this->WeaponBaseSkeletalMesh->SetupAttachment(RootComponent);
    this->WeaponBaseMesh->SetupAttachment(RootComponent);
}

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


