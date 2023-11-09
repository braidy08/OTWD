#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "SBZWeaponUIStatSettings.h"
#include "SBZWeaponConfigurationSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZWeaponConfigurationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RarityDisplayNames[7];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ConditionDisplayNames[4];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FamilyDisplayNames[13];
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FireModeDisplayNames[3];
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> LoudnessDisplayNames;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponUIStatSettings> RangedUIStats;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponUIStatSettings> MeleeUIStats;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZWeaponUIStatSettings> WeaponPartUIStats;
    
    USBZWeaponConfigurationSettings();
};

