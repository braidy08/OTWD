#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "OTWDCheatManagerSettings.generated.h"

class USBZGameplayAbilityDataCollection;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class OTWD_API UOTWDCheatManagerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZGameplayAbilityDataCollection> SecondaryAbilitiesCollection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZGameplayAbilityDataCollection> ToolAbilitiesCollection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZGameplayAbilityDataCollection> DefenseAbilitiesCollection;
    
    UOTWDCheatManagerSettings();
};

