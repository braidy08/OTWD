#pragma once
#include "CoreMinimal.h"
#include "SBZMission.h"
#include "ETwitchVoteOptions.h"
#include "OTWDMetaSurvivorIngameData.h"
#include "VoteChange.h"
#include "VoteEnd.h"
#include "OTWDMission.generated.h"

class AActor;
class AOTWDClumsyNavManager;
class AOTWDCrowdSwitcher;
class UTwitchCore;

UCLASS(Blueprintable, NonTransient)
class OTWD_API AOTWDMission : public ASBZMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTwitchableMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETwitchVoteOptions> TwitchVotePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeOpenVote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoteDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenVotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeApplyingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumberOfVotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTwitchCore* TwitchCore;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AOTWDClumsyNavManager* ClumsyNavManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AOTWDCrowdSwitcher* CrowdSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDMetaSurvivorIngameData> RescuedSurvivors;
    
public:
    AOTWDMission();
private:
    UFUNCTION(BlueprintCallable)
    void VoteEnd(const FVoteEnd NewVoteEnd);
    
    UFUNCTION(BlueprintCallable)
    void VoteChange(const FVoteChange NewVoteChange);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SBZImportance(const FString& FunctionString);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleActionPhaseEntered();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CompleteBonusObjectiveWithKey(int32 Key, AActor* ActorKey);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CompleteBonusObjectiveWithActorKey(AActor* Key);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddRescuedSurvivor(const FOTWDMetaSurvivorIngameData& Data);
    
};

