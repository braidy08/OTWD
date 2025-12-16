#include "SBZProjectileManager.h"
#include "Templates/SubclassOf.h"

ASBZProjectileManager::ASBZProjectileManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
}

void ASBZProjectileManager::SpawnProjectilePicker(const ASBZThrowableProjectile* Projectile) {
}

ASBZRangedProjectile* ASBZProjectileManager::SpawnProjectile(UWorld* World, TSubclassOf<ASBZRangedProjectile> ProjectileClass, AActor* InOwner, FGuid CurrentGuid) {
    return NULL;
}

void ASBZProjectileManager::NetMulticast_ProjectileHit_Implementation(FProjectileHitScanResult OutHit) {
}

ASBZRangedProjectile* ASBZProjectileManager::GetSpawnedProjectile(FGuid Guid) {
    return NULL;
}

ASBZProjectileManager* ASBZProjectileManager::GetProjectileManager(UObject* WorldContextObject) {
    return NULL;
}

void ASBZProjectileManager::DestroyProjectile(FGuid Guid) {
}


