#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SBZImpactActor.generated.h"

class UDecalComponent;
class UMaterialInterface;
class USBZImpactManager;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class ASBZImpactActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult HitInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZImpactManager* CachedImpactManager;
    
public:
    ASBZImpactActor();
protected:
    UFUNCTION(BlueprintCallable)
    UDecalComponent* SpawnManagedDecalAttached(UMaterialInterface* DecalMaterial, FVector DecalSize, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, float LifeSpan);
    
    UFUNCTION(BlueprintCallable)
    UDecalComponent* SpawnManagedDecalAtLocation(UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan);
    
};

