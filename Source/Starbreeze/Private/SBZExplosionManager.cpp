#include "SBZExplosionManager.h"

void ASBZExplosionManager::Server_ExplodeWithOverlap(AActor* DamageCauser, const UObject* WorldContextObject, const FVector& Pos, const FRotator& Rot, const float Radius, UParticleSystem* EmitterTemplate, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors, bool bNetMulticast) {
}

TArray<AActor*> ASBZExplosionManager::Server_ExplodeWithFalloffDamage(const UObject* WorldContextObject, const FVector& Pos, const FRotator& Rot, const FExplosionFalloffData& ExplosionData, bool bNetMulticast) {
    return TArray<AActor*>();
}

TArray<AActor*> ASBZExplosionManager::Server_Explode(const UObject* WorldContextObject, const FVector& Pos, const FRotator& Rot, const FExplosionData& ExplosionData, bool bNetMulticast) {
    return TArray<AActor*>();
}

void ASBZExplosionManager::NetMulticast_Explode_Implementation(AActor* DamageCauser, const FVector_NetQuantize& Pos, const FRotator& Rot, UParticleSystem* EmitterTemplate, float Radius) {
}

void ASBZExplosionManager::Multicast_TakeDamage_Implementation(const TArray<FActorMultiHitResult>& InMultiHitResultArray, FRadialDamageEvent InDamageEvent, AController* InInstigatedByController, AActor* InDamageCauser) {
}

void ASBZExplosionManager::Init_Implementation() {
}

ASBZExplosionManager* ASBZExplosionManager::GetExplosionManager(UObject* WorldContextObject) {
    return NULL;
}

void ASBZExplosionManager::ExplodeWithOverlap(AActor* DamageCauser, const UObject* WorldContextObject, const FVector& Pos, const FRotator& Rot, const float Radius, UParticleSystem* EmitterTemplate, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors, bool bNetMulticast) {
}

TArray<AActor*> ASBZExplosionManager::ExplodeWithFalloffDamage(const UObject* WorldContextObject, const FVector& Pos, const FRotator& Rot, const FExplosionFalloffData& ExplosionData, bool bNetMulticast) {
    return TArray<AActor*>();
}

TArray<AActor*> ASBZExplosionManager::Explode(const UObject* WorldContextObject, const FVector& Pos, const FRotator& Rot, const FExplosionData& ExplosionData, bool bNetMulticast) {
    return TArray<AActor*>();
}

ASBZExplosionManager::ASBZExplosionManager() {
}

