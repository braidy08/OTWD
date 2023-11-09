#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZWeaponRarity.h"
#include "SBZProfileSaveData.h"
#include "ChallengeIndex.h"
#include "ChallengeProgress.h"
#include "OTWDMissionEndReport.h"
#include "OTWDPawnSavedData.h"
#include "OTWDQuestSavedData.h"
#include "OTWDVaultIdentifier.h"
#include "OTWDWeaponPartSavedData.h"
#include "OTWDWeaponSavedData.h"
#include "OTWDProfileSaveData.generated.h"

class UOTWDLibraryItemData;

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UOTWDProfileSaveData : public USBZProfileSaveData {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnVaultIsFullNotificationTriggered);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAssignWeaponToPawnAtSlot, ESBZWeaponRarity, WeaponRarity);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FChangedAbilityTechTree);
    
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
    int32 RewardsSinceLastDrop_WeaponFamily[13];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNewSaveData;
    
    UOTWDProfileSaveData();
    UFUNCTION(BlueprintCallable)
    bool HaveAnyMissionReports();
    
    UFUNCTION(BlueprintCallable)
    void AssignPawnLevelingData(const FGuid& SavedDataGuid, int32 Level, int32 Exp, int32 Skillpoints);
    
};

