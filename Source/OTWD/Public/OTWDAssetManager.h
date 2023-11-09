#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "OTWDAssetManager.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    UOTWDAssetManager();
};

