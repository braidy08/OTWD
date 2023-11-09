#include "SBZClimbSchematic.h"

USBZClimbSchematic::USBZClimbSchematic() {
    this->bUseForwardSnappingAgainstLadder = true;
    this->bUseCenterSnappingAgainstLadder = false;
    this->CenterSnappingMinDistance = 1;
    this->AutoSnapMaxDistFromLadder = 1;
    this->MaxNeededFacingAngle = 1;
    this->PitchAlignDuration = 1;
    this->ClimbSpeed = 1;
    this->EnterFromBottomDetectionDist = 1;
    this->EnterFromTopDetectionDist = 1;
    this->EnterFromFallingDetectionDist = 1;
    this->ExitFromTopDetectionHeight = 1;
    this->MaxUpRayDistForEntryExitFinding = 1;
    this->ExitFromBottomDetectionHeight = 1;
    this->MinYaw = 1;
    this->MaxYaw = 1;
    this->MinPitch = 1;
    this->MaxPitch = 1;
    this->DistFeetToHand = 1;
    this->ForwardDistanceFromLadderAtEnteringFromBottom = 1;
    this->ForwardDistanceFromLadderAtExitingFromTop = 1;
    this->ForwardDistanceFromLadderAtExitingFromBottom = 1;
    this->ForwardDistanceFromLadderDuringClimbing = 1;
    this->ForwardDistanceFromLadderAtEnteringFromTop = 1;
    this->MontageBlendOut = 1;
    this->TreadAutoSnapThreadshold = 1;
    this->BrakingDeceleration = 1;
    this->MaxAcceleration = 1;
    this->bCheckCollisionBeforeClimbing = false;
    this->CollisionChannel = ECC_WorldStatic;
}

