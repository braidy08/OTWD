#pragma once
#include "CoreMinimal.h"
#include "WeaponSlotConfiguration.generated.h"

class USBZWeaponPartSlot;

USTRUCT(BlueprintType)
struct FWeaponSlotConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSlot* Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AdditionalSockets;
    
    STARBREEZE_API FWeaponSlotConfiguration();
};

