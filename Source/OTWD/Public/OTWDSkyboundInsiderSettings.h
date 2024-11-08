#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OTWDSkyboundInsiderSettings.generated.h"

class USBZContentPack;

UCLASS(Blueprintable, Config=Engine, Const, DefaultConfig, Config=OTWD)
class UOTWDSkyboundInsiderSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZContentPack> SkyboundInsiderContentPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZContentPack* CachedSkyboundInsiderContentPack;
    
public:
    UOTWDSkyboundInsiderSettings();
};

