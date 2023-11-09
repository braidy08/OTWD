#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SBZWeaponConfiguration.h"
#include "SBZWeaponModdingSession.generated.h"

class USBZProfileSaveData;
class USBZWeaponPartSlot;

UCLASS(Abstract, Blueprintable, Transient)
class STARBREEZE_API USBZWeaponModdingSession : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZProfileSaveData* DuplicateProfileSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid ActiveWeaponSavedDataGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> StartingAttachedWeaponMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USBZWeaponModdingSession();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid RetrievePartInSlot(const USBZWeaponPartSlot* Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveWeaponPartsChanged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USBZWeaponPartSlot*> GetPartSlotsForWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGuid> GetAvailablePartsForSlot(USBZWeaponPartSlot* Slot, bool bIncludeAssignedParts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZWeaponConfiguration CreateWeaponConfiguration() const;
    
    UFUNCTION(BlueprintCallable)
    bool AssignPartToSlot(const USBZWeaponPartSlot* Slot, const FGuid& SavedDataGuid, FGuid& OutDetachedSavedDataGuid);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyModifications(USBZProfileSaveData* ProfileSaveData);
    
};

