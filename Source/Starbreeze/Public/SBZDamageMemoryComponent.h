#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZDamageMemoryData.h"
#include "SBZDamageMemoryComponent.generated.h"

class AActor;
class AController;
class UDamageType;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZDamageMemoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bServerOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLogDamageWithoutTimestamp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZDamageMemoryData> DamageHistory;
    
public:
    USBZDamageMemoryComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalDamageTaken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageTakenInTheLastSeconds(const float Seconds) const;
    
};

