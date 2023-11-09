#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDVendorWeapon.h"
#include "OTWDVendorWeaponPart.h"
#include "OTWDVendorInventoryAsset.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDVendorInventoryAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDVendorWeapon> Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDVendorWeaponPart> WeaponParts;
    
    UOTWDVendorInventoryAsset();
protected:
    UFUNCTION(BlueprintCallable)
    void GenerateWeapons();
    
    UFUNCTION(BlueprintCallable)
    void GenerateWeaponParts();
    
};

