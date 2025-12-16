#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "OTWDMetagameWeaponSettingsByDifficulty.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDMetagameWeaponSettingsByDifficulty : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalPlayerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdditionalPowerLevel;
    
    FOTWDMetagameWeaponSettingsByDifficulty();
};

