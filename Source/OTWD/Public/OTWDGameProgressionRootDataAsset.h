#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OTWDGameProgressionRootDataAsset.generated.h"

class USBZCharacterSchematic;
class USBZUnlockableMetadata;

UCLASS(Blueprintable)
class OTWD_API UOTWDGameProgressionRootDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZUnlockableMetadata*> CampLevelGroupSchematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZUnlockableMetadata*> CampBlockingQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUnlockableMetadata* RequiredUnlockableForTimeLimitedVendor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUnlockableMetadata* RequiredUnlockableForBounties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUnlockableMetadata* RequiredUnlockableForWeeklies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<USBZCharacterSchematic>, USBZUnlockableMetadata*> CharacterLockedByMetaData;
    
    UOTWDGameProgressionRootDataAsset();
};

