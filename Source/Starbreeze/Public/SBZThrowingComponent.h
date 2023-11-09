#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "SBZThrowActorData.h"
#include "SBZThrowItemData.h"
#include "SBZThrowProjectileData.h"
#include "Templates/SubclassOf.h"
#include "SBZThrowingComponent.generated.h"

class AActor;
class ASBZThrowableProjectile;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZThrowingComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultThrowForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DefaultThrownItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnOffsetFromCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterMovementVelocityModifier;
    
public:
    USBZThrowingComponent();
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ThrowActorNetMulticast(const FSBZThrowActorData& ActorData, const FTransform& OwnerTransform);
    
public:
    UFUNCTION(BlueprintCallable)
    void ThrowActor(AActor* ActorToThrow, FVector Direction, float ThrowForce, FVector ExtraVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SpawnAndThrowThrowableProjectile(TSubclassOf<ASBZThrowableProjectile> ThrowableProjectileClass, const FVector& StartLocation, const FVector& Direction, float ThrowForce, const FRadialDamageParams& RadialDamage, const FGuid& Guid);
    
    UFUNCTION(BlueprintCallable)
    void SpawnAndThrowItem(const FSBZThrowItemData& ThrowData);
    
    UFUNCTION(BlueprintCallable)
    void SpawnAndThrowDefaultItem();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ThrowActor(const FSBZThrowActorData& ActorData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnAndThrowThrowableProjectile(const FSBZThrowProjectileData& ThrowData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnAndThrowItem(const FSBZThrowItemData& ThrowData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnThrowItem(const FSBZThrowItemData& ThrowData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SpawnAndThrowThrowableProjectile(const FSBZThrowProjectileData& ThrowData);
    
public:
    UFUNCTION(BlueprintCallable)
    FSBZThrowItemData GetDefaultThrowData();
    
};

