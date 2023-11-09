#pragma once
#include "CoreMinimal.h"
#include "SBZGameInstance.h"
#include "OTWDMissionEndReport.h"
#include "Templates/SubclassOf.h"
#include "OTWDGameInstance.generated.h"

class UOTWDCharacterManager;
class UOTWDMetaManager;
class UOTWDMetaTechManager;
class UOTWDQuestManager;
class UOTWDUIBindings;
class UOTWDWeaponLootMetaDataAsset;
class UTwitchCore;

UCLASS(Blueprintable, NonTransient)
class OTWD_API UOTWDGameInstance : public USBZGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOTWDUIBindings* OTWDUIBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOTWDCharacterManager> CharacterManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDWeaponLootMetaDataAsset* WeaponLootMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString TwitchOAuth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString TwitchUsername;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString TwitchChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAuthenticatedOnTwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShitHitsTheFan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTwitchCore* TwitchCore;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOTWDMetaManager* MetaManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOTWDMetaTechManager* MetaTechManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDCharacterManager* CharacterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOTWDQuestManager* QuestManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOTWDMissionEndReport LastOpenedMissionReport;
    
public:
    UOTWDGameInstance();
    UFUNCTION(BlueprintCallable)
    void StartTwitchConnection();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SBZLevels(const FString& CommandsIn);
    
    UFUNCTION(Exec)
    void SBZHiderToggle(const uint32 HiderBitIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SBZHiderReset();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SBZActors(const FString& PartialComponentName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void OptimizeTickAndPoseUpdate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenLatestMissionReport_Internal();
    
    UFUNCTION(BlueprintCallable)
    bool OpenLatestMissionReport(FOTWDMissionEndReport& OutMissionReport);
    
public:
    UFUNCTION(BlueprintCallable)
    UOTWDQuestManager* GetQuestManager();
    
    UFUNCTION(BlueprintCallable)
    UOTWDMetaTechManager* GetMetaTechManager();
    
    UFUNCTION(BlueprintCallable)
    UOTWDMetaManager* GetMetaManager();
    
    UFUNCTION(BlueprintCallable)
    FOTWDMissionEndReport GetLastOpenedMissionReport();
    
    UFUNCTION(BlueprintCallable)
    UOTWDCharacterManager* GetCharacterManager();
    
    UFUNCTION(BlueprintCallable)
    void EndTwitchConnection();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisplayVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEnterMatchmaking();
    
};

