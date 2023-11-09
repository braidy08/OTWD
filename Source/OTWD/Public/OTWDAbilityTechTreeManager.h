#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMetaTechState.h"
#include "OTWDAbilityTechTreeManager.generated.h"

class APawn;
class UOTWDAbilityTechSchematic;
class UObject;
class USBZTech;
class USBZUnlockableMetadata;

UCLASS(Blueprintable)
class OTWD_API UOTWDAbilityTechTreeManager : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOTWDAbilityTechTreeManager();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ValidateAbilityTechLoadout(const UObject* WorldContextObject, const TSoftClassPtr<APawn>& CharacterClass, const TArray<USBZTech*>& Techs);
    
    UFUNCTION(BlueprintCallable)
    static void ResetPendingGlobalPurchases();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetCharacterTree(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetAllPurchasedGlobalTech(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RemoveGlobalTech(const UObject* WorldContextObject, UOTWDAbilityTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable)
    static int32 RefundPendingPurchases();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 RefundAllPurchasedTech(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PurchaseTech(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech, bool bFinalizeImmediately);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PurchaseGlobalTech(const UObject* WorldContextObject, UOTWDAbilityTechSchematic* Tech, bool bFinalizeImmediately);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsTechPurchased(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsTechPurchasable(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech, bool bGlobalTech);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPurchasePending(UOTWDAbilityTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsInCharacterTechTree(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, const USBZTech* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasRequiredTechsPurchased(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasRequiredMetaTechsPurchased(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasEnoughSkillPoints(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasEnoughOptionalTechsPurchased(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EMetaTechState GetTechState(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<USBZUnlockableMetadata*> GetTechList(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FinalizePurchases(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FinalizeGlobalPurchases(const UObject* WorldContextObject);
    
};

