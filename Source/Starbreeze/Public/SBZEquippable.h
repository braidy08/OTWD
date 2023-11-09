#pragma once
#include "CoreMinimal.h"
#include "EEquippableSlotId.h"
#include "SBZEquippableAbilityBindInfo.h"
#include "SBZWeapon.h"
#include "SBZEquippable.generated.h"

class USBZEquippableAnimationCollection;
class USBZEquippableAttributeSet;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZEquippable : public ASBZWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZEquippableAnimationCollection> FirstPersonPlayerActivationAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZEquippableAnimationCollection> ThirdPersonPlayerActivationAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZEquippableAnimationCollection> FirstPersonEquippableActivationAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZEquippableAnimationCollection> ThirdPersonEquippableActivationAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSBZEquippableAbilityBindInfo> AbilityBindInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZEquippableAttributeSet* EquippableAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickOnlyWhenEquipped;
    
    ASBZEquippable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RefillAmmo(EEquippableSlotId SlotID, int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeactivateActionSlot2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeactivateActionSlot1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeactivateActionSlot0();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateActionSlot2();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateActionSlot1();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateActionSlot0();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAmmo(EEquippableSlotId SlotID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUsesLeft(EEquippableSlotId SlotID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxUses(EEquippableSlotId SlotID) const;
    
    UFUNCTION(BlueprintCallable)
    void EndAbilityActionAtSlot(EEquippableSlotId SlotID);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeAmmo(EEquippableSlotId SlotID, float MagnitudeScale);
    
};

