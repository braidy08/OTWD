#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LightingChannels -FallbackName=LightingChannels
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
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
    
    ASBZSparseIrradianceVolumeHintVolume(const FObjectInitializer& ObjectInitializer);

};

