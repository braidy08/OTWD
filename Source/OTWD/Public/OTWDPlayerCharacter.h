#pragma once
#include "CoreMinimal.h"
#include "ESBZPlayerDefeatState.h"
#include "SBZPlayerCharacter.h"
#include "Templates/SubclassOf.h"
#include "OTWDPlayerCharacter.generated.h"

class AActor;
class ASkeletalMeshActor;
class UAkAudioEvent;
class UOTWDAbilityItemsAttributeSet;
class UOTWDCraftingResourceAttributeSet;
class UOTWDMetaResourceAttributeSet;
class UOTWDReviveShoutTargetComponent;
class USBZHealthChunkAttributeSet;
class USBZOutlineSchematic;
class USBZShoutTargetComponent;

UCLASS(Blueprintable)
class OTWD_API AOTWDPlayerCharacter : public ASBZPlayerCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnequippedTakedownWeaponSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrimaryAccessorySocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnequippedFlareGunSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASkeletalMeshActor> DefaultFlareGunClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOTWDReviveShoutTargetComponent* ReviveShoutTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShoutTargetComponent* CalloutShoutTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOTWDAbilityItemsAttributeSet* AbilityItemAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOTWDCraftingResourceAttributeSet* CraftingResourceAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOTWDMetaResourceAttributeSet* MetaResourceAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHealthChunkAttributeSet* HealthChunkAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponsHolstered, meta=(AllowPrivateAccess=true))
    bool bWeaponsHolstered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PrimaryAccessory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASkeletalMeshActor* FlareGun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> WalkerFastKillsTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkerFastKillsAchievementCommentDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WalkerFastKillsAchievementCommentNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> HumanFastKillsTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HumanFastKillsAchievementCommentDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HumanFastKillsAchievementCommentNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ReviveSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasValidIngameName;
    
public:
    AOTWDPlayerCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnholsterWeapons();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Slomo(float coeff);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDebug();
    
    UFUNCTION(BlueprintCallable)
    void ShouldHideWeapons(bool bHide);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidedByZombies(bool bAvoidedByZombies);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SavePath(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void RescuedSurvivor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecordPath();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPause();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponsHolstered();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHasValidIngameName(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_MarkAllNearbyTrapsAndLootItems(float Distance, float Duration, USBZOutlineSchematic* DefaultTrapOutline, USBZOutlineSchematic* DefaultLootOutline);
    
    UFUNCTION(BlueprintCallable)
    void MarkAllNearbyTrapsAndLootItems(float Distance, float Duration, USBZOutlineSchematic* DefaultTrapOutline, USBZOutlineSchematic* DefaultLootOutline, bool bReplicated);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadPath(const FString& Name);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void HolsterWeapons();
    
    UFUNCTION(BlueprintCallable)
    void HandleGameStateEntered(FName StateName);
    
    UFUNCTION(BlueprintCallable)
    void HandleDeafeatStateChanged(ESBZPlayerDefeatState NewState, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GotoPatrolPoint(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetDuration(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotSlomo(float coeff);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotShowDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotSavePath(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotRecordPath();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotPlayPause();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotLogging(const FString& str);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotLoadPath(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotGotoPatrolPoint(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotGetDuration(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreWeaponsHolstered() const;
    
};

