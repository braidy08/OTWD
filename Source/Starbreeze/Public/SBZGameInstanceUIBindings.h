#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SBZGameInstanceUIBindings.generated.h"

class ASBZWeapon;
class USBZCharacterSchematic;

USTRUCT(BlueprintType)
struct FSBZGameInstanceUIBindings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterSchematic* LocalPlayerCharacterSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZWeapon> LocalPlayerPrimaryWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZWeapon> LocalPlayerSecondaryWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZWeapon> LocalPlayerMeleeWeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZCharacterSchematic*> PlayerCharacterSchematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASBZWeapon>> PrimaryWeaponClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASBZWeapon>> SecondaryWeaponClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASBZWeapon>> MeleeWeaponClasses;
    
    STARBREEZE_API FSBZGameInstanceUIBindings();
};

