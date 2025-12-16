#pragma once
#include "CoreMinimal.h"
#include "OnTextureAssetLoadedDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTextureAssetLoaded, UTexture2D*, Texture);

