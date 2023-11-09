#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "OTWDMetagameWeaponGameSettings.generated.h"

class UOTWDMetagameWeaponDataAsset;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=OTWD)
class UOTWDMetagameWeaponGameSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOTWDMetagameWeaponDataAsset> MetaDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOTWDMetagameWeaponDataAsset* CachedMetaDataAsset;
    
public:
    UOTWDMetagameWeaponGameSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UOTWDMetagameWeaponDataAsset* GetMetaDataAsset();
    
};

