#include "SBZAICharacterAnimation.h"
#include "Net/UnrealNetwork.h"

void USBZAICharacterAnimation::SetIsTank(bool bInIsTank) {
}

void USBZAICharacterAnimation::OnNextTickCallback() {
}

bool USBZAICharacterAnimation::IsPOIAnimation(uint8 Bitmask, ESBZPOIAnimation Enum, bool bIsLastEnumInBitmask) const {
    return false;
}

ESBZAIDirection USBZAICharacterAnimation::GetDirectionToTheTarget() {
    return ESBZAIDirection::None;
}




void USBZAICharacterAnimation::AnimNotify_OnInteractWithDoorFullyBlended() {
}

void USBZAICharacterAnimation::AnimNotify_OnFacialPOIUsingEnded() {
}

void USBZAICharacterAnimation::AnimNotify_OnFacialPOIIntroEnded() {
}

void USBZAICharacterAnimation::AnimNotify_OnFacialPOIExitEnded() {
}

void USBZAICharacterAnimation::AnimNotify_OnExitPOI() {
}

void USBZAICharacterAnimation::AnimNotify_FinishedToSingleNode() {
}

void USBZAICharacterAnimation::AnimNotify_FinishedFromSingleNode() {
}

void USBZAICharacterAnimation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZAICharacterAnimation, StartVariation);
}

USBZAICharacterAnimation::USBZAICharacterAnimation() {
    this->bShouldPlayFirstPersonAnim = false;
    this->PinningType = ESBZAICharacterPinningAnimType::None;
    this->bWantAttackDoorAgainst = false;
    this->bWantAttackDoorNotAgainst = false;
    this->bAttackDoorAgainst = false;
    this->bAttackDoorNotAgainst = false;
    this->bInteractWithDoor = false;
    this->bLunging = false;
    this->LungeDistance = 1;
    this->MinimumWalkingSpeed = 1;
    this->bHasTurnOnSpotAnimation = false;
    this->AnimationTurnAngle = 1;
    this->WaitForTurnOnSpotFullBlendOut = true;
    this->bIdleStateReadyForTurnOnSpot = false;
    this->Searching = NULL;
    this->bIsSearching = false;
    this->bWasMoving = false;
    this->bIsTransitioningToIdle = false;
    this->bCanUpdateSpeedValue = false;
    this->SpeedSquareMovingAverage = 1;
    this->HighSpeedSquareMovingAverageThreshold = 1;
    this->VelocityAverageWindowFramesNum = 0;
    this->bIsAIAgentAboutToStop = false;
    this->LastAnimNormalizedTime = 1;
    this->bIsPlayingLandingMontage = false;
    this->CurrentPOIMontage = NULL;
    this->bIsUsingPOI = false;
    this->bIsUsingFacialPOI = false;
    this->bIsInterruptExitingPOI = false;
    this->bHasLaunchedIntroPOI = false;
    this->bHasLaunchedUsingPOI = false;
    this->bHasLaunchedExitPOI = false;
    this->bHasPlayedAllPOISequences = false;
    this->bHasOutro = false;
    this->POIAnimationMask = 0;
    this->POIFacialAnimationMask = 0;
    this->bIsTank = false;
    this->bAverageVelocityHigh = false;
    this->CurrentStanceId = 0;
    this->bIsInOneOfCombatStances = false;
    this->TurnAroundBlendSpace = NULL;
    this->LatestSmallestHeading = 1;
    this->ToActionDefaultBlendTime = 1;
    this->ToActionBlendTime = 1;
    this->FromActionBlendTime = 1;
    this->bWasPlayingPOIDynMontage = false;
    this->StartVariation = 1;
    this->LocalStartVariation = 1;
    this->SecondaryLocalStartVariation = 1;
    this->SecondaryBlendWeight = 1;
    this->SecondaryAnimation = NULL;
    this->bSecondaryAnimationLoop = false;
    this->PoseVariation = 0;
    this->bCanTransitionFromSingleNode = false;
    this->bTransitioningToSingleNode = false;
    this->BlendspaceInputAnimationTurnAngle = 1;
}

