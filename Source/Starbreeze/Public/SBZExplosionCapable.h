#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "SBZExplosionCapable.generated.h"

class UParticleSystem;

UINTERFACE(Blueprintable)
class STARBREEZE_API USBZExplosionCapable : public UInterface {
    GENERATED_BODY()
};

class STARBREEZE_API ISBZExplosionCapable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExplode(const FVector_NetQuantize& Pos, const FRotator& Rot, UParticleSystem* EmitterTemplate, float Radius);
    
};

