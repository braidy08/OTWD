#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponConfiguration.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerLoadout.generated.h"

class APawn;
class UGameplayAbility;
class USBZCosmetic;
class USBZTech;

USTRUCT(BlueprintType)
struct FSBZPlayerLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> PawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponConfiguration> WeaponSlotConfigurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayAbility>> Abilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZTech*> Techs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZCosmetic*> Cosmetics;
    
    STARBREEZE_API FSBZPlayerLoadout();
};

