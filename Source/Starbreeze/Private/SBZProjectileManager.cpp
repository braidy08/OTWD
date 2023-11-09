#include "SBZProjectileManager.h"
#include "Templates/SubclassOf.h"

void ASBZProjectileManager::SpawnProjectilePicker(const ASBZThrowableProjectile* Projectile) {
}

ASBZThrowableProjectile* ASBZProjectileManager::SpawnProjectile(UWorld* World, TSubclassOf<ASBZThrowableProjectile> ProjectileClass, AActor* InOwner, FGuid CurrentGuid) {
    return NULL;
}

void ASBZProjectileManager::NetMulticast_ProjectileHit_Implementation(FProjectileHitScanResult OutHit) {
}

ASBZThrowableProjectile* ASBZProjectileManager::GetSpawnedProjectile(FGuid Guid) {
    return NULL;
}

ASBZProjectileManager* ASBZProjectileManager::GetProjectileManager(UObject* WorldContextObject) {
    return NULL;
}

void ASBZProjectileManager::DestroyProjectile(FGuid Guid) {
}

ASBZProjectileManager::ASBZProjectileManager() {
}

