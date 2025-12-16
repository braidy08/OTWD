#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
#include "SBZPostProcessSettingsPresetDataAsset.generated.h"

UCLASS(Blueprintable, Const)
class USBZPostProcessSettingsPresetDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPostProcessSettings Settings;
    
    USBZPostProcessSettingsPresetDataAsset();

};

