#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMetaTechState.h"
#include "OTWDMetaTechManager.generated.h"

class UGameplayAbility;
class UOTWDMetaTechSchematic;

UCLASS(Blueprintable)
class OTWD_API UOTWDMetaTechManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChangedMetaTechTree);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangedMetaTechTree OnMetaTechTreeChanged;
    
    UOTWDMetaTechManager();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void PurchaseTech(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool IsTechPurchased(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool IsTechPurchasable(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool HasRequiredTechsPurchased(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool HasEnoughResourceSurvivors(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool HasEnoughResourceScrap(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool HasEnoughResourceGold(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool HasEnoughResourceEquipment(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool HasEnoughOptionalTechsPurchased(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    TArray<TSoftClassPtr<UGameplayAbility>> GetUnlockedAbilities(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    EMetaTechState GetTechState(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    TArray<UOTWDMetaTechSchematic*> GetTechList(const UObject* WorldContextObject);
    
};

