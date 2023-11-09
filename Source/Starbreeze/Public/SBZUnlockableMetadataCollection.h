#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SBZUnlockableMetadataCollection.generated.h"

class USBZUnlockableMetadata;

UCLASS(Blueprintable, Const)
class STARBREEZE_API USBZUnlockableMetadataCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUnlockableMetadata* Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZUnlockableMetadata*> Collection;
    
    USBZUnlockableMetadataCollection();
    UFUNCTION(BlueprintCallable)
    void ScanForMetadata() const;
    
    UFUNCTION(BlueprintCallable)
    void OrganizeCollection() const;
    
};

