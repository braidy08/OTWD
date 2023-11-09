#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "ESBZWeaponSlotType.h"
#include "SBZAttributeConfiguration.h"
#include "SBZWeaponDOFSettings.h"
#include "SBZWeaponIKSchematic.h"
#include "SBZWeaponSlotConfiguration.h"
#include "SBZWeaponSwaySchematic.h"
#include "SBZWeapon.generated.h"

class ASBZWeapon;
class UAbilitySystemComponent;
class UAkAudioEvent;
class UAkComponent;
class UBoxComponent;
class UMeshComponent;
class USBZAimAssistsSchematic;
class USBZGeneralAnimationCollection;
class USBZModularMeshComponent;
class USBZPedestalAnimationCollection;
class USBZWeaponAttributeSet;
class USBZWeaponData;
class USBZWeaponMaterialSchematic;
class USBZWeaponPartSlot;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZWeapon : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUsePrimaryAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseSecondaryAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* WeaponBaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticShadowMesh1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WeaponBaseStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* WeaponBaseSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZModularMeshComponent* ModularBuilderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StartingGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZWeaponAttributeSet* WeaponAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAIWeapon;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponData* WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLoadAssetsOnConstruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponIKSchematic IK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponIKSchematic JammedIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseJammedIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponSwaySchematic Sway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerRangeMaximum0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZAttributeConfiguration> AttributeConfigurations0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStaticBaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAimAssistsSchematic* AimAssistRegular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAimAssistsSchematic* AimAssistADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGeneralAnimationCollection* FirstPersonPlayerGeneralAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGeneralAnimationCollection* ThirdPersonPlayerGeneralAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGeneralAnimationCollection* FirstPersonWeaponGeneralAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGeneralAnimationCollection* ThirdPersonWeaponGeneralAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPedestalAnimationCollection* ThirdPersonPlayerPedestalAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPedestalAnimationCollection* ThirdPersonWeaponPedestalAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USBZWeaponPartSlot*, FSBZWeaponSlotConfiguration> ModularConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponMaterialSchematic* MaterialParametersSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EquipEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* UnequipEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* JamEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EmptyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponDOFSettings DOFSettings;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> LastInstigator;
    
public:
    ASBZWeapon();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdateWeaponNetDormancy();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWeaponInstigatorChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWeaponAssetsLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnModularBuilderComponentSpawningFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESBZWeaponSlotType GetWeaponSlotType(TSoftClassPtr<ASBZWeapon> WeaponClassPtr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<USBZWeaponPartSlot*, FSBZWeaponSlotConfiguration> GetWeaponSlotsConfiguration(TSoftClassPtr<ASBZWeapon> WeaponClassPtr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetWeaponDisplayName(TSoftClassPtr<ASBZWeapon> WeaponClassPtr);
    
};

