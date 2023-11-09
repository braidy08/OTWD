#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESurvivorState.h"
#include "OTWDMetagameSurvivorIdentityDataAsset.h"
#include "OTWDMetagameSurvivor.generated.h"

class UOTWDMetagameSurvivorBuildingDataAsset;
class UOTWDMetagameSurvivorClassDataAsset;
class UOTWDSurvivorVoiceDataAsset;
class USkeletalMesh;
class UTexture2D;

UCLASS(Blueprintable)
class OTWD_API UOTWDMetagameSurvivor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNew;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HealingCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOTWDMetagameSurvivorClassDataAsset* ClassType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowPotential;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TurnsTillDying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TurnsTillDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESurvivorState SurvivorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnAMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SurvivorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UOTWDSurvivorVoiceDataAsset> SurvivorVoice;
    
public:
    UOTWDMetagameSurvivor();
    UFUNCTION(BlueprintCallable)
    void SetSurvivorVoice(TSoftObjectPtr<UOTWDSurvivorVoiceDataAsset> NewVoice);
    
    UFUNCTION(BlueprintCallable)
    void SetSurvivorMesh(TSoftObjectPtr<USkeletalMesh> NewMesh);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetIsNew(UObject* WorldContextObject, bool bNew);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void InjureSurvivor(UObject* WorldContextObject, uint8 TurnsToDying);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void HealSurvivor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void GiveXp(int32 Xp, bool& bDidSurvivorLevelUp);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UOTWDSurvivorVoiceDataAsset> GetSurvivorVoice();
    
    UFUNCTION(BlueprintCallable)
    void GetSurvivorsXPData(float& OutProgressToNextLevelModifier, int32& CurrentXPAmount, int32& XPToTheNextLevel);
    
    UFUNCTION(BlueprintCallable)
    FText GetSurvivorSurame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESurvivorState GetSurvivorState() const;
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetSurvivorSmallPortrait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSurvivorShowsPotential() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetSurvivorQuote();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetSurvivorPortrait();
    
    UFUNCTION(BlueprintCallable)
    FText GetSurvivorName();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<USkeletalMesh> GetSurvivorMesh();
    
    UFUNCTION(BlueprintCallable)
    FOTWDMetagameSurvivorIdentityDataAsset GetSurvivorIdentity();
    
    UFUNCTION(BlueprintCallable)
    FText GetSurvivorFullName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetMaxLevel() const;
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetInjuredSurvivorSmallPortrait();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture2D> GetInjuredSurvivorPortrait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UOTWDMetagameSurvivorClassDataAsset* GetClass() const;
    
    UFUNCTION(BlueprintCallable)
    UOTWDMetagameSurvivorBuildingDataAsset* GetAssignedBuilding();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool CanHealSurvivor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGoOnMission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeAssignedToBuilding() const;
    
};

