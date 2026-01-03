#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SBZSaveDataSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZSaveDataSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UserValidationFailureWindowTitle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UserValidationFailurePrompt1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText UserValidationFailurePrompt2;
    
    USBZSaveDataSettings();

};

