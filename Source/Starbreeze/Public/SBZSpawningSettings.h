#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SBZPlatformSpawnSettings.h"
#include "SBZSpawningSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class USBZSpawningSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPlatformSpawnSettings PlatformSettings[6];
    
public:
    USBZSpawningSettings();
};

