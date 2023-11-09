#pragma once
#include "CoreMinimal.h"
#include "AISoundData.h"
#include "ESBZAISoundSurfaceTypes.h"
#include "SBZSchematic.h"
#include "SBZAISoundDataSchematic.generated.h"

class USBZNoiseSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAISoundDataSchematic : public USBZSchematic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZAISoundSurfaceTypes, float> SurfaceModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISoundData AISoundWalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISoundData AISoundCrouchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISoundData AISoundRunData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNoiseSchematic* AINoiseDataWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNoiseSchematic* AINoiseDataCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNoiseSchematic* AINoiseDataRun;
    
    USBZAISoundDataSchematic();
};

