#include "OTWDMission.h"
#include "TwitchCore.h"

void AOTWDMission::VoteEnd(const FVoteEnd NewVoteEnd) {
}

void AOTWDMission::VoteChange(const FVoteChange NewVoteChange) {
}

void AOTWDMission::SBZImportance(const FString& FunctionString) {
}

void AOTWDMission::HandleActionPhaseEntered() {
}

void AOTWDMission::CompleteBonusObjectiveWithKey(int32 Key, AActor* ActorKey) {
}

void AOTWDMission::CompleteBonusObjectiveWithActorKey(AActor* Key) {
}

void AOTWDMission::AddRescuedSurvivor(const FOTWDMetaSurvivorIngameData& Data) {
}

AOTWDMission::AOTWDMission() {
    this->bTwitchableMode = true;
    this->TwitchVotePool.AddDefaulted(7);
    this->DelayBeforeOpenVote = 1;
    this->VoteDuration = 1;
    this->DelayBetweenVotes = 1;
    this->DelayBeforeApplyingEffect = 1;
    this->MaxNumberOfVotes = 0;
    this->TwitchCore = CreateDefaultSubobject<UTwitchCore>(TEXT("OTWDTwitchCore"));
    this->ClumsyNavManager = NULL;
    this->CrowdSwitcher = NULL;
}

