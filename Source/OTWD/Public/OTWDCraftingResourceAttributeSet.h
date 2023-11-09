#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "SBZAttributeSetOverflowBase.h"
#include "OTWDCraftingResourceAttributeSet.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDCraftingResourceAttributeSet : public USBZAttributeSetOverflowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Chemical, meta=(AllowPrivateAccess=true))
    float Chemical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChemicalMaximum, meta=(AllowPrivateAccess=true))
    float ChemicalMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Metal, meta=(AllowPrivateAccess=true))
    float Metal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MetalMaximum, meta=(AllowPrivateAccess=true))
    float MetalMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Cloth, meta=(AllowPrivateAccess=true))
    float Cloth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClothMaximum, meta=(AllowPrivateAccess=true))
    float ClothMaximum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Gadget, meta=(AllowPrivateAccess=true))
    float Gadget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GadgetMaximum, meta=(AllowPrivateAccess=true))
    float GadgetMaximum;
    
    UOTWDCraftingResourceAttributeSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MetalMaximum(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Metal(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GadgetMaximum(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Gadget(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ClothMaximum(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Cloth(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChemicalMaximum(float OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Chemical(float OldValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetMetalMaximumAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetMetalAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetGadgetMaximumAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetGadgetAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetClothMaximumAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetClothAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetChemicalMaximumAttribute();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAttribute GetChemicalAttribute();
    
};

