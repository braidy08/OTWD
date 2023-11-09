#pragma once
#include "CoreMinimal.h"
#include "ESBZRangedWeaponModuleResultType.h"
#include "ESBZRangedWeaponModuleType.h"
#include "SBZWeaponPartSetEnabledRequestedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZWeaponPartSetEnabledRequestedDelegate, ESBZRangedWeaponModuleType, PartType, bool, bWantedToEnable, ESBZRangedWeaponModuleResultType, Result);

