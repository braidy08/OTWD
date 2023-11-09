#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponCondition.h"
#include "ESBZWeaponRarity.h"
#include "SBZScalarParameter.h"
#include "SBZSchematic.h"
#include "SBZVectorParameter.h"
#include "SBZWeaponMaterialCondition.h"
#include "SBZWeaponMaterialRarity.h"
#include "SBZWeaponMaterialSchematic.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZWeaponMaterialSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponMaterialRarity MaterialRarity[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponMaterialCondition MaterialCondition[4];
    
public:
    USBZWeaponMaterialSchematic();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void MakeVectorParameters(ESBZWeaponRarity Rarity, ESBZWeaponCondition Condition, TArray<FSBZVectorParameter>& OutVectorParameters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void MakeScalarParameters(ESBZWeaponRarity Rarity, ESBZWeaponCondition Condition, TArray<FSBZScalarParameter>& OutScalarParameters);
    
};

