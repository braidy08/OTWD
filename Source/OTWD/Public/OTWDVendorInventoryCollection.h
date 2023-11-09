#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDVendorInventoryCollection.generated.h"

class UOTWDVendorInventoryAsset;

UCLASS(Blueprintable)
class OTWD_API UOTWDVendorInventoryCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDVendorInventoryAsset*> Collection;
    
    UOTWDVendorInventoryCollection();
};

