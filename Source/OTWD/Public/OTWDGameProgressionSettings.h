#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OTWDGameProgressionSettings.generated.h"

class UOTWDGameProgressionRootDataAsset;

UCLASS(Blueprintable, Config=Engine, Const, DefaultConfig, Config=OTWD)
class OTWD_API UOTWDGameProgressionSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOTWDGameProgressionRootDataAsset> RootDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOTWDGameProgressionRootDataAsset* CachedRootDataAsset;
    
public:
    UOTWDGameProgressionSettings();
};

