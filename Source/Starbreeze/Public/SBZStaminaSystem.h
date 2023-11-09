#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SBZStaminaSystem.generated.h"

class ASBZPlayerCharacter;
class USBZBaseAction;
class USBZCharacterActionHandler;
class USBZGameProperty;
class USBZPropertyComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZStaminaSystem : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunDrainPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RechargeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RechargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraRechargeTimeOnEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZGameProperty> StaminaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USBZBaseAction>> ActionToDisable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OwningPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterActionHandler* CharacterActionHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPropertyComponent* PropertyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameProperty* StaminaProperty;
    
public:
    USBZStaminaSystem();
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnStaminaEmptyRPC();
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(USBZCharacterActionHandler* ActionHandler, USBZPropertyComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaminaPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxStamina() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentStamina() const;
    
};

