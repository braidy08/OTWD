#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Volume.h"
#include "ESBZSparseIrradianceVolumeHintVolumeAction.h"
#include "SBZSparseIrradianceVolumeHintVolume.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZSparseIrradianceVolumeHintVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESBZSparseIrradianceVolumeHintVolumeAction::Type> Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightingChannels LightingChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepulsionDistance;
    
    ASBZSparseIrradianceVolumeHintVolume();
};

