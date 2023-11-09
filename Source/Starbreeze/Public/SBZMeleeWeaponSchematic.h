#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SBZWeaponSchematic.h"
#include "SBZMeleeWeaponSchematic.generated.h"

class UAkAudioEvent;
class USBZMeleeAttack;
class USBZMeleeWeaponAnimationCollection;
class USBZNoiseSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API USBZMeleeWeaponSchematic : public USBZWeaponSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMeleeAttack*> HeavyAttackSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZMeleeAttack*> LightAttackSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle MeleeWeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZMeleeWeaponAnimationCollection> FirstPersonPlayerMeleeWeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZMeleeWeaponAnimationCollection> ThirdPersonPlayerMeleeWeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZMeleeWeaponAnimationCollection> FirstPersonWeaponMeleeWeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZMeleeWeaponAnimationCollection> ThirdPersonWeaponMeleeWeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SwingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HitEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNoiseSchematic* HeavyNoiseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNoiseSchematic* LightNoiseData;
    
    USBZMeleeWeaponSchematic();
};

