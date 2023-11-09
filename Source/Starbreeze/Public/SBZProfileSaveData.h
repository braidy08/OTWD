#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZNetStruct.h"
#include "SBZSaveData.h"
#include "SBZWeaponConfiguration.h"
#include "SBZWeaponSavedData.h"
#include "SBZProfileSaveData.generated.h"

class USBZContentPack;
class USBZGameplayAbilityData;
class USBZUnlockableMetadata;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZProfileSaveData : public USBZSaveData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProfileDataCreated, const FSBZNetStruct&, ProfileDataPackage);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerNickname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SkyboundEmail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZContentPack*> PurchasedContentPacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZUnlockableMetadata*> OpenedLevelGroupsMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZUnlockableMetadata*> CompletedQuestsMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> GlobalAssignedWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZGameplayAbilityData*> GlobalAssignedAbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZUnlockableMetadata*> GlobalAssignedCosmeticMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZUnlockableMetadata*> GlobalAcquiredTechsMetadata;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ActivePawnSavedDataGuid;
    
public:
    USBZProfileSaveData();
    UFUNCTION(BlueprintCallable)
    bool SetActivePawnSavedDataGuid(const FGuid& SavedDataGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid RetrieveWeaponAssignedToPawnAtSlot(const FGuid& PawnSavedDataGuid, int32 WeaponSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZUnlockableMetadata* RetrieveCosmeticMetadataAssignedToPawnAtSlot(const FGuid& PawnSavedDataGuid, int32 CosmeticSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZGameplayAbilityData* RetrieveAbilityAssignedToPawnAtSlot(const FGuid& PawnSavedDataGuid, int32 AbilitySlotIndex) const;
    
    UFUNCTION(BlueprintCallable)
    bool RemoveWeaponSavedData(const FGuid& SavedDataGuid, bool bValidate);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveWeaponPartSavedData(const FGuid& SavedDataGuid, bool bValidate);
    
    UFUNCTION(BlueprintCallable)
    bool RemovePawnSavedData(const FGuid& SavedDataGuid, bool bValidate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetActivePawnSavedDataGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesWeaponSavedDataExist(const FGuid& SavedDataGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesWeaponPartSavedDataExist(const FGuid& SavedDataGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesPawnSavedDataExist(const FGuid& SavedDataGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZWeaponConfiguration CreateWeaponConfigurationFromWeaponSavedData(const FSBZWeaponSavedData& WeaponSavedData, bool bIncludeSoftAssets, bool bIncludeWeaponData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanModifyWeaponSavedData(const FGuid& SavedDataGuid) const;
    
    UFUNCTION(BlueprintCallable)
    bool AssignWeaponToPawnAtSlot(const FGuid& PawnSavedDataGuid, const FGuid& WeaponSavedDataGuid, int32 WeaponSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool AssignCosmeticMetadataToPawnAtSlot(const FGuid& PawnSavedDataGuid, USBZUnlockableMetadata* CosmeticMetadata, int32 CosmeticSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    bool AssignAbilityToPawnAtSlot(const FGuid& PawnSavedDataGuid, USBZGameplayAbilityData* AbilityData, int32 AbilitySlotIndex);
    
};

