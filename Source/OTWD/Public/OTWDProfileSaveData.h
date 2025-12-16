#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZProfileSaveData -FallbackName=SBZProfileSaveData
#include "ChallengeIndex.h"
#include "ChallengeProgress.h"
#include "ChangedAbilityTechTreeDelegate.h"
#include "OTWDMissionEndReport.h"
#include "OTWDPawnSavedData.h"
#include "OTWDQuestSavedData.h"
#include "OTWDVaultIdentifier.h"
#include "OTWDWeaponPartSavedData.h"
#include "OTWDWeaponSavedData.h"
#include "OnAssignWeaponToPawnAtSlotDelegate.h"
#include "OnVaultIsFullNotificationTriggeredDelegate.h"
#include "OTWDProfileSaveData.generated.h"

class UOTWDLibraryItemData;
class USBZCharacterSchematic;
class USBZWeaponData;
class USBZWeaponPartSlot;

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UOTWDProfileSaveData : public USBZProfileSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDPawnSavedData> PawnSavedDataCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> NewlyCreatedPawnSavedDataGuids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDWeaponSavedData> WeaponSavedDataCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDWeaponPartSavedData> WeaponPartSavedDataCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDVaultIdentifier> PostmasterQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDQuestSavedData> ActiveQuestsSavedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDLibraryItemData*> UnreadUnlockedLibraryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDLibraryItemData*> UnlockedLibraryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FChallengeIndex, FChallengeProgress> ChallengesProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedMaxAmountInVault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedMaxAmountInPostmaster;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnAssignWeaponToPawnAtSlot OnAssignWeaponToPawnAtSlot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FChangedAbilityTechTree OnAbilityTechTreeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnVaultIsFullNotificationTriggered OnVaultIsFullNotificationTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDMissionEndReport> MissionReports;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardsSinceLastDrop_WeaponSlot[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardsSinceLastDrop_WeaponFamily[15];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USBZWeaponPartSlot*, int32> RewardsSinceLastDrop_WeaponPartSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USBZWeaponData*, int32> RewardsSinceLastDrop_Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNewSaveData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterSchematic* HeatherPawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterSchematic* ReinaPawnData;
    
public:
    UOTWDProfileSaveData();

    UFUNCTION(BlueprintCallable)
    bool HaveValidationChangedLoadout();
    
    UFUNCTION(BlueprintCallable)
    bool HaveAnyMissionReports();
    
    UFUNCTION(BlueprintCallable)
    bool CreateReinaSaveData();
    
    UFUNCTION(BlueprintCallable)
    void AssignPawnLevelingData(const FGuid& SavedDataGuid, int32 Level, int32 Exp, int32 Skillpoints);
    
};

