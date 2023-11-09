#pragma once
#include "CoreMinimal.h"
#include "OTWDWeaponPartVaultFilter.generated.h"

class USBZWeaponPartSlot;

USTRUCT(BlueprintType)
struct FOTWDWeaponPartVaultFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponPartSlot*> WeaponPartSlots;
    
    OTWD_API FOTWDWeaponPartVaultFilter();
};

