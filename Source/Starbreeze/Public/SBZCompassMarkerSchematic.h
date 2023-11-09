#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "SBZCompassMarkerSchematic.generated.h"

class USBZObjectiveSchematic;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZCompassMarkerSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZObjectiveSchematic* ObjectiveSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveWhenKilled;
    
    USBZCompassMarkerSchematic();
};

