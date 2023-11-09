#pragma once
#include "CoreMinimal.h"
#include "SBZSchematic.h"
#include "SBZCompassMarkerSchematicList.generated.h"

class USBZCompassMarkerSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API USBZCompassMarkerSchematicList : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZCompassMarkerSchematic*> CompassMarkers;
    
    USBZCompassMarkerSchematicList();
};

