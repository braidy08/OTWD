#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ETraceMethod.h"
#include "TraceDamageZoneComponent.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UTraceDamageZoneComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UTraceDamageZoneComponent();
    UFUNCTION(BlueprintCallable)
    TArray<UPrimitiveComponent*> TraceDamageZone(FVector startTrace, FVector endTrace, TEnumAsByte<ECollisionChannel> macroCollisionChannel, TEnumAsByte<ECollisionChannel> detailedCollisionChannel, bool BulletPiercing, TEnumAsByte<ETraceMethod> Trace, float SphereDiameter, bool displayDebugInfo);
    
};

