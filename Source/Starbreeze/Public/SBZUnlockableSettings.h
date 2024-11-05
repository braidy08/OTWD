#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"
#include "SBZUnlockableSettings.generated.h"

class USBZContentPack;
class USBZCosmeticCollection;
class USBZCosmeticTypeHelper;
class USBZUnlockableMetadataCollection;

UCLASS(Blueprintable, Config=Engine, Const, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZUnlockableSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZUnlockableMetadataCollection> GlobalUnlockableMetadataCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZUnlockableMetadataCollection* CachedGlobalUnlockableMetadataCollection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USBZContentPack>> ContentPacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZContentPack*> CachedContentPacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, USBZContentPack*> CachedContentPackMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZCosmeticCollection> AllCosmeticCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZCosmeticTypeHelper> CosmeticTypeHelper;
    
public:
    USBZUnlockableSettings();
};

