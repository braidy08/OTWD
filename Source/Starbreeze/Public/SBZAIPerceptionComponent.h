#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "GameplayTagContainer.h"
#include "SBZAIPerceptionComponent.generated.h"

class ASBZAIController;
class USBZAIAggroSystemComponent;
class USBZAIIgnoreFactionComponent;
class USBZAIPerceptionMemoryComponent;
class USBZAlertnessComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIPerceptionComponent : public UAIPerceptionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickRate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TickFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> IgnoreTags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAlertnessComponent* AlertnessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIIgnoreFactionComponent* IgnoreFactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIAggroSystemComponent* AggroSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIPerceptionMemoryComponent* PerceptionMemoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIController* OwnerController;
    
public:
    USBZAIPerceptionComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveIgnoreTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    bool IsSightEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsHearingEnabled();
    
    UFUNCTION(BlueprintCallable)
    void EnableSight();
    
    UFUNCTION(BlueprintCallable)
    void EnableHearing();
    
    UFUNCTION(BlueprintCallable)
    void DisableSight();
    
    UFUNCTION(BlueprintCallable)
    void DisableHearing();
    
    UFUNCTION(BlueprintCallable)
    void AddIgnoreTag(const FGameplayTag& Tag);
    
};

