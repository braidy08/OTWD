#pragma once
#include "CoreMinimal.h"
#include "ESBZWeaponFamily.h"
#include "OTWDWeaponVaultFilter.generated.h"

USTRUCT(BlueprintType)
struct FOTWDWeaponVaultFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WeaponSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESBZWeaponFamily> WeaponFamilies;
    
    OTWD_API FOTWDWeaponVaultFilter();
};

