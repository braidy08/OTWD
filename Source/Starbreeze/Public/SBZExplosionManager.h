#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "ActorMultiHitResult.h"
#include "ExplosionData.h"
#include "ExplosionFalloffData.h"
#include "SBZExplosionManager.generated.h"

class AController;
class ASBZExplosionManager;
class UObject;
class UParticleSystem;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZExplosionManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> HitImpulseObjectTypes;
    
public:
    ASBZExplosionManager();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Server_ExplodeWithOverlap(AActor* DamageCauser, const UObject* WorldContextObject, const FVector& Pos, const FRotator& Rot, const float Radius, UParticleSystem* EmitterTemplate, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors, bool bNetMulticast);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    TArray<AActor*> Server_ExplodeWithFalloffDamage(const UObject* WorldContextObject, const FVector& Pos, const FRotator& Rot, const FExplosionFalloffData& ExplosionData, bool bNetMulticast);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    TArray<AActor*> Server_Explode(const UObject* WorldContextObject, const FVector& Pos, const FRotator& Rot, const FExplosionData& ExplosionData, bool bNetMulticast);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_Explode(AActor* DamageCauser, const FVector_NetQuantize& Pos, const FRotator& Rot, UParticleSystem* EmitterTemplate, float Radius);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TakeDamage(const TArray<FActorMultiHitResult>& InMultiHitResultArray, FRadialDamageEvent InDamageEvent, AController* InInstigatedByController, AActor* InDamageCauser);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZExplosionManager* GetExplosionManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ExplodeWithOverlap(AActor* DamageCauser, const UObject* WorldContextObject, const FVector& Pos, const FRotator& Rot, const float Radius, UParticleSystem* EmitterTemplate, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ClassFilter, const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutActors, bool bNetMulticast);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    TArray<AActor*> ExplodeWithFalloffDamage(const UObject* WorldContextObject, const FVector& Pos, const FRotator& Rot, const FExplosionFalloffData& ExplosionData, bool bNetMulticast);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    TArray<AActor*> Explode(const UObject* WorldContextObject, const FVector& Pos, const FRotator& Rot, const FExplosionData& ExplosionData, bool bNetMulticast);
    
};

