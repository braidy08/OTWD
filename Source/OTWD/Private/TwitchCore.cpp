#include "TwitchCore.h"

UTwitchCore::UTwitchCore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTwitchFlag = false;
}

void UTwitchCore::SetUserInfo(const FString& InoAuth, const FString& InUsername, const FString& InChannel) {
}

bool UTwitchCore::SendIRCMessage(const FString& InMessage, bool bSendToChannel, const FString& InChannel) {
    return false;
}

void UTwitchCore::OpenVote(const TArray<ETwitchVoteOptions>& InVoteOptions, float InDuration, int32 InMaxVotes) {
}

void UTwitchCore::Disconnect() {
}

bool UTwitchCore::Connect(FString& OutError) {
    return false;
}

void UTwitchCore::CloseVote(ETwitchVoteEndType InEndType) {
}

bool UTwitchCore::AuthenticateTwitchIRC(FString& OutError) {
    return false;
}


