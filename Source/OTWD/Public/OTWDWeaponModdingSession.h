#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZWeaponModdingSession.h"
#include "OTWDMetagameCurrency.h"
#include "OTWDWeaponPartSavedData.h"
#include "OTWDWeaponSavedData.h"
#include "OTWDWeaponModdingSession.generated.h"

class UOTWDProfileSaveData;
class USBZWeaponPartSlot;

UCLASS(Blueprintable, NonTransient)
class UOTWDWeaponModdingSession : public USBZWeaponModdingSession {
    GENERATED_BODY()
public:
    UOTWDWeaponModdingSession();
    UFUNCTION(BlueprintCallable)
    bool RepairWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOTWDWeaponSavedData GetSessionWeaponSavedData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOTWDWeaponPartSavedData GetSessionWeaponPartSavedData(const FGuid& SavedDataGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGuid> GetSessionWeaponParts(FGuid OptionalNewPartSavedDataGuid, const USBZWeaponPartSlot* OptionalNewPartSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOTWDProfileSaveData* GetSessionProfileSavedData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSessionCost(FOTWDMetagameCurrency& OutModdingCost) const;
    
};

