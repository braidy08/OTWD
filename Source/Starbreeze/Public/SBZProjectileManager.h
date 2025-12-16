#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ProjectileHitScanResult.h"
#include "Templates/SubclassOf.h"
#include "SBZProjectileManager.generated.h"

class ASBZProjectileManager;
class ASBZRangedProjectile;
class ASBZThrowableProjectile;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZProjectileManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, ASBZRangedProjectile*> SpawnedProjectiles;
    
public:
    ASBZProjectileManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnProjectilePicker(const ASBZThrowableProjectile* Projectile);
    
    UFUNCTION(BlueprintCallable)
    ASBZRangedProjectile* SpawnProjectile(UWorld* World, TSubclassOf<ASBZRangedProjectile> ProjectileClass, AActor* InOwner, FGuid CurrentGuid);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ProjectileHit(FProjectileHitScanResult OutHit);
    
public:
    UFUNCTION(BlueprintCallable)
    ASBZRangedProjectile* GetSpawnedProjectile(FGuid Guid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZProjectileManager* GetProjectileManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void DestroyProjectile(FGuid Guid);
    
};

