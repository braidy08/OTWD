#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnExplosionSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZExplodable.generated.h"

class AController;
class UDamageType;
class UParticleSystem;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZExplodable : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExplosionSignature OnExplosion;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* EmitterTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnExplosion;
    
public:
    ASBZExplodable();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Explode(AController* ExplosionInstigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnExplosion();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyDamage(float DamageAmount, TSubclassOf<UDamageType> DamageTypeClass, AController* EventInstigator, AActor* DamageCauser);
    
};

