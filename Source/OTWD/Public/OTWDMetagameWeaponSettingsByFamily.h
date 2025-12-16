#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "OTWDMetagameCurrency.h"
#include "OTWDMetagameWeaponSettingsByFamily.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FOTWDMetagameWeaponSettingsByFamily : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMetagameCurrency BaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerLevelModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DismantleMultiplier;
    
    FOTWDMetagameWeaponSettingsByFamily();
};

