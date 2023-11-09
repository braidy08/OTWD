#pragma once
#include "CoreMinimal.h"
#include "SBZGrenade.h"
#include "Templates/SubclassOf.h"
#include "SBZFragGrenade.generated.h"

class UDamageType;
class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZFragGrenade : public ASBZGrenade {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageOuterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* EmitterTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyDelay;
    
public:
    ASBZFragGrenade();
protected:
    UFUNCTION(BlueprintCallable)
    void OnDetonate();
    
};

