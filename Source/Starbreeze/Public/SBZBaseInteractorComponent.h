#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttributeSet.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "ESBZVoiceComment.h"
#include "ESBZVoicePriority.h"
#include "OnInteractionEndedDelegate.h"
#include "OnInteractionStartedDelegate.h"
#include "OnInteractorInteractionSuccessfulDelegate.h"
#include "SBZBaseInteractorComponent.generated.h"

class ASBZCharacter;
class UAbilitySystemComponent;
class USBZInteractableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZBaseInteractorComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* OwnerAbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* OwnerCharacter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumInteractionDistance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionStarted OnInteractionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionEnded OnInteractionEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractorInteractionSuccessful OnInteractionSuccessful;
    
    USBZBaseInteractorComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SaySystemComment(ESBZVoiceComment Comment, bool bReplicated, ESBZVoicePriority InPlayingPriority) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 HandleOwnerGameplayEvent(const FGameplayTag& EventTag, const FGameplayEventData& Payload) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOwnerAttribute(const FGameplayAttribute& Attribute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractionProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZInteractableComponent* GetCurrentInteractable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInteractWithCurrentInteractable() const;
    
};

