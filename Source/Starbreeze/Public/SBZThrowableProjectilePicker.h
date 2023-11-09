#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "SBZThrowableProjectilePicker.generated.h"

class ASBZPlayerCharacter;
class ASBZThrowableProjectile;
class UCapsuleComponent;
class UPrimitiveComponent;
class USBZOutlineComponent;
class USceneComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZThrowableProjectilePicker : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* InteractionCapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Guid, meta=(AllowPrivateAccess=true))
    FGuid ProjectileGuid;
    
public:
    ASBZThrowableProjectilePicker();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnPickup(ASBZPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Guid();
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileDestroyed(AActor* InDestroyedProjectile);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginPickUpOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_OnPickup(ASBZPlayerCharacter* Player);
    
public:
    UFUNCTION(BlueprintCallable)
    void MatchProjectile(const ASBZThrowableProjectile* InProjectile);
    
};

