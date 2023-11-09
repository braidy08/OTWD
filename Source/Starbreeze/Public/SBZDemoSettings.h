#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "SBZDemoSettings.generated.h"

class USBZDemoModeConfiguration;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class USBZDemoSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDemoMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZDemoModeConfiguration> DemoModeConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZDemoModeConfiguration* CachedDemoModeConfiguration;
    
    USBZDemoSettings();
    UFUNCTION(BlueprintCallable, Exec)
    static void SetDemoModeEnabled(bool bShouldEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDemoModeEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USBZDemoModeConfiguration* GetDemoModeConfiguration();
    
};

