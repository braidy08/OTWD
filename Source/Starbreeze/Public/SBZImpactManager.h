#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZTranslucentTimer.h"
#include "SBZImpactManager.generated.h"

class UDecalComponent;
class USBZObjectRingBuffer;

UCLASS(Blueprintable)
class STARBREEZE_API USBZImpactManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> ProjectileDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> MeleeDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> ExplosionDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> FootstepDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> BloodSplatterDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZObjectRingBuffer* DecalComponentRingBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZTranslucentTimer> TranslucentPrimitiveComponenets;
    
public:
    USBZImpactManager();
private:
    UFUNCTION(BlueprintCallable)
    void HandleDroppedDecalComponent(UObject* DroppedElement);
    
};

