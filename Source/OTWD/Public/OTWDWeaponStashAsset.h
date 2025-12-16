#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZUnlockable -FallbackName=SBZUnlockable
#include "OTWDMetagameCurrency.h"
#include "OTWDWeaponStashAsset.generated.h"

class USBZWeaponData;
class USBZWeaponPartSlot;

UCLASS(Blueprintable)
class OTWD_API UOTWDWeaponStashAsset : public USBZUnlockable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMetagameCurrency Costs[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInt32Interval PowerLevels[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPowerLevelForRarity[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USBZWeaponPartSlot*, float> SlotWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZWeaponData*> Weapons;
    
    UOTWDWeaponStashAsset();

};

