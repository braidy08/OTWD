#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponConfiguration.h"
#include "AsyncCreateWeaponConfigurationPayload.generated.h"

class ASBZWeapon;

USTRUCT(BlueprintType)
struct FAsyncCreateWeaponConfigurationPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponConfiguration StubWeaponConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ASBZWeapon> WeaponClassAsset;
    
    STARBREEZE_API FAsyncCreateWeaponConfigurationPayload();
};

