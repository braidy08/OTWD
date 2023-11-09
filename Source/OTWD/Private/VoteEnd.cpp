#include "VoteEnd.h"

FVoteEnd::FVoteEnd() {
    this->Winner = ETwitchVoteOptions::TVO_Horde30;
    this->NumberOfVotes = 0;
    this->EndType = ETwitchVoteEndType::TVET_Duration;
    this->bEndedInDraw = false;
}

