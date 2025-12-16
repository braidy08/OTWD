#pragma once
#include "CoreMinimal.h"
#include "OnTextureAssetLoadedDelegate.h"
#include "SBZLoadAsset.h"
#include "SBZLoadTextureAsset.generated.h"

class USBZLoadTextureAsset;
class UTexture2D;

UCLASS(Blueprintable)
class STARBREEZE_API USBZLoadTextureAsset : public USBZLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTextureAssetLoaded Completed;
    
    USBZLoadTextureAsset();

    UFUNCTION(BlueprintCallable)
    static USBZLoadTextureAsset* AsyncLoadTextureAsset(TSoftObjectPtr<UTexture2D> TextureAsset);
    
};

