#pragma once
#include "CoreMinimal.h"
#include "SBZWeaponConfiguration.h"
#include "WeaponConfigurationSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWeaponConfigurationSignature, FSBZWeaponConfiguration, Configuration);

