#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OTWDMetagameSurviorGameSettings.generated.h"

class UOTWDMetaSchematic;
class UOTWDMetagameBuildingsRootDataAsset;
class UOTWDMetagameMissionRootDataAsset;
class UOTWDMetagameRootSurvivorDataAssets;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=OTWD)
class UOTWDMetagameSurviorGameSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOTWDMetaSchematic> MetaSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOTWDMetaSchematic* CachedMetaSchematic;
    
public:
    UOTWDMetagameSurviorGameSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UOTWDMetagameRootSurvivorDataAssets* GetSurvivorsRootData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UOTWDMetagameMissionRootDataAsset* GetMissionsRootData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UOTWDMetaSchematic* GetMetaSchematic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UOTWDMetagameBuildingsRootDataAsset* GetBuildingsRootData();
    
};

