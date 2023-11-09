#include "TraceDamageZoneComponent.h"

TArray<UPrimitiveComponent*> UTraceDamageZoneComponent::TraceDamageZone(FVector startTrace, FVector endTrace, TEnumAsByte<ECollisionChannel> macroCollisionChannel, TEnumAsByte<ECollisionChannel> detailedCollisionChannel, bool BulletPiercing, TEnumAsByte<ETraceMethod> Trace, float SphereDiameter, bool displayDebugInfo) {
    return TArray<UPrimitiveComponent*>();
}

UTraceDamageZoneComponent::UTraceDamageZoneComponent() {
}

