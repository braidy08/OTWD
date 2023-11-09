#include "OTWDZombieCharacterAnimation.h"

void UOTWDZombieCharacterAnimation::AnimNotify_WakingUpStarted() {
}

void UOTWDZombieCharacterAnimation::AnimNotify_WakingUpEnded() {
}

void UOTWDZombieCharacterAnimation::AnimNotify_ExitEatingStarted() {
}

void UOTWDZombieCharacterAnimation::AnimNotify_ExitEatingEnded() {
}

void UOTWDZombieCharacterAnimation::AnimNotify_CrawlWalkStarted() {
}

void UOTWDZombieCharacterAnimation::AnimNotify_CrawlTransitionStarted() {
}

void UOTWDZombieCharacterAnimation::AnimNotify_CrawlTransitionEnded() {
}

void UOTWDZombieCharacterAnimation::AnimNotify_CrawlIdleStarted() {
}

UOTWDZombieCharacterAnimation::UOTWDZombieCharacterAnimation() {
    this->CHZombie = NULL;
    this->bIsAlive = true;
    this->bIsStumbling = false;
    this->bIsLyingDown = false;
    this->bShouldStandUp = false;
    this->bIsExitingEating = false;
    this->bIsCrawling = false;
    this->bIsBloater = false;
    this->bIsMissingRightArm = false;
    this->bIsMissingLeftArm = false;
    this->bIsCrawlerTransitionDone = false;
    this->StumbleVariation = NULL;
    this->IdleVariationPatrol = NULL;
    this->WalkVariationPatrol = NULL;
    this->TurnVariationPatrol = NULL;
    this->IdleVariationInvestigate = NULL;
    this->WalkVariationInvestigate = NULL;
    this->TurnVariationInvestigate = NULL;
    this->IdleVariationCombat = NULL;
    this->WalkVariationCombat = NULL;
    this->TurnVariationCombat = NULL;
    this->IdleLurkerVariation = NULL;
    this->StandupLurkerVariation = NULL;
    this->LurkerToCrawlerVariation = NULL;
    this->IdleCrawlerVariationPatrol = NULL;
    this->IdleCrawlerLeftHandVariationPatrol = NULL;
    this->IdleCrawlerRightHandVariationPatrol = NULL;
    this->WalkCrawlerVariationPatrol = NULL;
    this->WalkCrawlerLeftHandVariationPatrol = NULL;
    this->WalkCrawlerRightHandVariationPatrol = NULL;
    this->TurnCrawlerVariationPatrol = NULL;
    this->TurnCrawlerLeftHandVariationPatrol = NULL;
    this->TurnCrawlerRightHandVariationPatrol = NULL;
    this->IdleCrawlerVariationInvestigate = NULL;
    this->IdleCrawlerLeftHandVariationInvestigate = NULL;
    this->IdleCrawlerRightHandVariationInvestigate = NULL;
    this->WalkCrawlerVariationInvestigate = NULL;
    this->WalkCrawlerLeftHandVariationInvestigate = NULL;
    this->WalkCrawlerRightHandVariationInvestigate = NULL;
    this->TurnCrawlerVariationInvestigate = NULL;
    this->TurnCrawlerLeftHandVariationInvestigate = NULL;
    this->TurnCrawlerRightHandVariationInvestigate = NULL;
    this->IdleCrawlerVariationCombat = NULL;
    this->IdleCrawlerLeftHandVariationCombat = NULL;
    this->IdleCrawlerRightHandVariationCombat = NULL;
    this->WalkCrawlerVariationCombat = NULL;
    this->WalkCrawlerLeftHandVariationCombat = NULL;
    this->WalkCrawlerRightHandVariationCombat = NULL;
    this->TurnCrawlerVariationCombat = NULL;
    this->TurnCrawlerLeftHandVariationCombat = NULL;
    this->TurnCrawlerRightHandVariationCombat = NULL;
    this->TryReachVariation = NULL;
    this->ToCrawlerVariation = NULL;
    this->AttackDoorAgainstVariation = NULL;
    this->AttackDoorNotAgainstVariation = NULL;
    this->CrawlerRagdollBlend = 1;
}

