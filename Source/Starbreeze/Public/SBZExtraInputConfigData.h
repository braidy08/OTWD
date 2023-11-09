#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "InputCoreTypes.h"
#include "SBZRebindableSpecification.h"
#include "SBZExtraInputConfigData.generated.h"

class USBZUIActionVisualSchematic;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Input)
class STARBREEZE_API USBZExtraInputConfigData : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZRebindableSpecification> RebindableActions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FKey> BlacklistedBindableKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZUIActionVisualSchematic* DefaultVisualSchematic;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZUIActionVisualSchematic> SoftDefaultVisualSchematic;
    
    USBZExtraInputConfigData();
};

