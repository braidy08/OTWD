#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialDamageParams -FallbackName=RadialDamageParams
#include "EThrowableProjectileState.h"
#include "SBZRangedProjectile.h"
#include "SBZThrowableProjectile.generated.h"

class AActor;
class APawn;
class ASBZCharacter;
class UParticleSystemComponent;
class UPrimitiveComponent;
class USBZProjectileMovementComponent;
class USBZProjectileSchematic;
class USBZThrowableProjectileSchematic;
class USkeletalMesh;
class USkeletalMeshComponent;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZThrowableProjectile : public ASBZRangedProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ProjectileMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* TrailParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZProjectileMovementComponent* ProjectileMovementComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThrowableProjectileState CurrentState;
    
public:
    ASBZThrowableProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Throw(float ThrowForce, USBZProjectileSchematic* InProjectileSchematic, const FVector& StartPosition, const FVector& Direction, APawn* InInstigator, AActor* InDamageCauser, const FRadialDamageParams& InDamageParams, USkeletalMesh* OverrideMesh);
    
    UFUNCTION(BlueprintCallable)
    void ShowProjectile();
    
    UFUNCTION(BlueprintCallable)
    void SetState(EThrowableProjectileState InCurrentState);
    
    UFUNCTION(BlueprintCallable)
    void SetMesh(USkeletalMesh* InMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSpeedModifier(float InMaxSpeedModifier);
    
    UFUNCTION(BlueprintCallable)
    void SetGravityScaleModifier(float InGravityScaleModifier);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterLimbDetached(ASBZCharacter* Actor, const FName& InBoneToDetachAt, const FVector& Impulse);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachedToActorDestroyed(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZThrowableProjectileSchematic* GetThrowableProjectileSchematic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EThrowableProjectileState GetState() const;
    
    UFUNCTION(BlueprintCallable)
    float GetPenetrationDist(float InSpeed);
    
};

