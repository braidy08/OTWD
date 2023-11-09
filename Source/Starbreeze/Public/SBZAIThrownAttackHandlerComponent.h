#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EThrownAttackState.h"
#include "SBZAIThrownAttackHandlerComponent.generated.h"

class AActor;
class ASBZHumanAICharacter;
class USBZAIPerceptionMemoryComponent;
class USBZAIThrowWeapon;
class USBZCharacterAnimation;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIThrownAttackHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownSuccessful;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownUnsuccessful;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebugVisualization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAIThrowWeapon* CurrentThrowWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LastThrownActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZHumanAICharacter* OwnerCharacter;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USBZCharacterAnimation> CharacterAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIPerceptionMemoryComponent* MemoryComponent;
    
public:
    USBZAIThrownAttackHandlerComponent();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartThrowAnimation(const USBZAIThrowWeapon* ThrowWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EThrownAttackState GetCurrentAttackState() const;
    
};

