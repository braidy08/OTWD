#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SBZInputKeyVisual.h"
#include "SBZMultiplatformActionVisual.h"
#include "SBZSchematic.h"
#include "SBZUIActionVisualSchematic.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class STARBREEZE_API USBZUIActionVisualSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSBZMultiplatformActionVisual> ActionVisualMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, FSBZInputKeyVisual> KeyVisualMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> UnboundKeyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> UIActionToInputAction;
    
    USBZUIActionVisualSchematic();
};

