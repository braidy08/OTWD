#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBZAISoundSurfaceTypes.h"
#include "SBZSurfaceType.generated.h"

class USBZBloodSplatterImpactSchematic;
class USBZExplosionImpactSchematic;
class USBZFootstepImpactSchematic;
class USBZMeleeImpactSchematic;
class USBZProjectileImpactSchematic;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZSurfaceType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> PhysicalSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAISoundSurfaceTypes AISoundSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZProjectileImpactSchematic* BulletImpactSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMeleeImpactSchematic* MeleeImpactSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZExplosionImpactSchematic* ExplosionImpactSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZFootstepImpactSchematic* FootstepImpactSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBloodSplatterImpactSchematic* BloodSplatterImpactSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MaterialSoundSwitchState;
    
    FSBZSurfaceType();
};

