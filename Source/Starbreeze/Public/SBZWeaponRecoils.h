#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponRecoilData.h"
#include "SBZWeaponRecoils.generated.h"

USTRUCT(BlueprintType)
struct FSBZWeaponRecoils {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponRecoilData HipFireRecoilData;
    
    STARBREEZE_API FSBZWeaponRecoils();
};

