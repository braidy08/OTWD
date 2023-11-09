#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "AttributeSet.h"
#include "Templates/SubclassOf.h"
#include "SBZGameplayAbilityCrafting.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class STARBREEZE_API USBZGameplayAbilityCrafting : public UGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> AddedResourceGameEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute ResourceAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute ResourceMaxAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToHold;
    
public:
    USBZGameplayAbilityCrafting();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResourceAlreadyFull(const FGameplayAbilityActorInfo& ActorInfo) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CraftObjectServerDelegate();
    
public:
    UFUNCTION(BlueprintCallable)
    bool CraftObject(int32 Amount);
    
};

