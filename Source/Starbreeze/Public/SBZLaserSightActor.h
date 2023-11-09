#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZLaserSightActor.generated.h"

class ASBZRangedWeapon;
class UParticleSystemComponent;
class USBZLaserSightStatsSchematic;
class USpotLightComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZLaserSightActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* DotSpotLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SightEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZLaserSightStatsSchematic* LaserSightStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZRangedWeapon* RangedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLightOffsetOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLightOffsetOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLightOffsetIn;
    
public:
    ASBZLaserSightActor();
};

