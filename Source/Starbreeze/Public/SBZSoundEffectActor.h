#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SBZSoundEffectData.h"
#include "SBZSoundEffectActor.generated.h"

class UAkComponent;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZSoundEffectActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSoundEffectData> SoundEffectArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystemComponent;
    
public:
    ASBZSoundEffectActor();
protected:
    UFUNCTION(BlueprintCallable)
    void OnEffectSpawned(FName InEventName, float InEmitterTime, FVector InLocation, FVector InVelocity);
    
    UFUNCTION(BlueprintCallable)
    void OnEffectDone(UParticleSystemComponent* InParticleSystemComponent);
    
};

