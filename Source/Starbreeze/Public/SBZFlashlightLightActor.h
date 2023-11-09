#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZFlashlightLightActor.generated.h"

class USpotLightComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZFlashlightLightActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BatteryPercent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LensFlarePowerMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LensFlareOpacityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpotLightComponent* SpotLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LensFlareComponent;
    
public:
    ASBZFlashlightLightActor();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFlashLightQuality() const;
    
};

