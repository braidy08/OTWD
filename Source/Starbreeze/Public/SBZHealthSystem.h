#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SBZHealthSystem.generated.h"

class USBZGameProperty;
class USBZPropertyComponent;
class USBZPropertyModifier;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZHealthSystem : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZGameProperty> HealthClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZGameProperty> ArmorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZPropertyModifier> ArmorModifierClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorRechargeDelay;
    
public:
    USBZHealthSystem();
    UFUNCTION(BlueprintCallable)
    void Initialize(USBZPropertyComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmorPercentage() const;
    
};

