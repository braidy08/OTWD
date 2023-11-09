#pragma once
#include "CoreMinimal.h"
#include "SBZLoadAsset.h"
#include "SBZLoadMaterialInstanceAsset.generated.h"

class UMaterialInstance;
class USBZLoadMaterialInstanceAsset;

UCLASS(Blueprintable)
class STARBREEZE_API USBZLoadMaterialInstanceAsset : public USBZLoadAsset {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaterialInstanceAssetLoaded, UMaterialInstance*, Material);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMaterialInstanceAssetLoaded Completed;
    
    USBZLoadMaterialInstanceAsset();
    UFUNCTION(BlueprintCallable)
    static USBZLoadMaterialInstanceAsset* AsyncLoadMaterialInstanceAsset(TSoftObjectPtr<UMaterialInstance> MaterialAsset);
    
};

