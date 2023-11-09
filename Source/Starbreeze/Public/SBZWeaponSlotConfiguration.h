#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponSlotConfiguration.generated.h"

class USBZWeaponPartSchematic;

USTRUCT(BlueprintType)
struct FSBZWeaponSlotConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponPartSchematic* DefaultPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponPartSchematic*> ModdableParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AdditionalSockets;
    
    STARBREEZE_API FSBZWeaponSlotConfiguration();
};

