#pragma once
#include "CoreMinimal.h"
#include "OnMaterialInstanceAssetLoadedDelegate.generated.h"

class UMaterialInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaterialInstanceAssetLoaded, UMaterialInstance*, Material);

