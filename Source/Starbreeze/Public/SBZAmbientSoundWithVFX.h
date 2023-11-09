#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZParticleEmitterSpawnType.h"
#include "SBZAmbientSound.h"
#include "SBZAmbientSoundWithVFX.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UPhysicalMaterial;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAmbientSoundWithVFX : public ASBZAmbientSound {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioParticleSpawnEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SpawnEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkComponent*> AkAudioSpawnEventComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioParticleCollideEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CollideEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkComponent*> AkAudioCollideEventComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioParticleDeathEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeathEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkComponent*> AkAudioDeathEventComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachSoundsAndEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTurnOffAmbientSoundOnParticleDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZParticleEmitterSpawnType ParticleEmitterSpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SocketToAttachTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnEmitterOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystemComponent;
    
public:
    ASBZAmbientSoundWithVFX();
    UFUNCTION(BlueprintCallable)
    void StartEmitter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnParticleSpawned(FName InEventName, float InEmitterTime, FVector InLocation, FVector InVelocity);
    
    UFUNCTION(BlueprintCallable)
    void OnParticleDied(FName InEventName, float InEmitterTime, int32 InParticleTime, FVector InLocation, FVector InVelocity, FVector InDirection);
    
    UFUNCTION(BlueprintCallable)
    void OnParticleCollided(FName InEventName, float InEmitterTime, int32 InParticleTime, FVector InLocation, FVector InVelocity, FVector InDirection, FVector InNormal, FName BoneName, UPhysicalMaterial* InPhysMat);
    
    UFUNCTION(BlueprintCallable)
    void OnEffectDone(UParticleSystemComponent* InParticleSystemComponent);
    
};

