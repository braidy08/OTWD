#include "SBZPlayerDefeatSettingsSchematic.h"

USBZPlayerDefeatSettingsSchematic::USBZPlayerDefeatSettingsSchematic() {
    this->bDebugTextEnabled = true;
    this->bLastStandEnabled = true;
    this->bAllowBodyMovementInLastStand = true;
    this->LastStandCameraHeight = 1;
    this->MaxLastStands = 0;
    this->GuaranteedBleedOuts = 0;
    this->bResetLastStandCountOnDeath = true;
    this->LastStandDuration = 1;
    this->LastStandHealth = 0;
    this->ReviveDuration = 1;
    this->bResetCameraToForwardDuringRevive = true;
    this->ReviveCameraResetSpeed = 1;
    this->ReviveHealthAmount = 1;
    this->ReviveArmorAmount = 1;
    this->OnReviveGrappleImmunityDuration = 1;
    this->AliveToBleedOutMontage = NULL;
    this->AliveToDeadMontage = NULL;
    this->ReviveMontage = NULL;
    this->bUsingFirstPersonTransitionAnimations = false;
    this->LastStandLookDownPitchLimit = 1;
    this->AttackerGrappleToDownedAlignmentTransitionMaxAngle = 1;
    this->bResetPinningSlotsOnEnterBleedOut = true;
    this->ResetPinningSlotsOnEnterBleedOutDelay = 1;
    this->bResetPinningSlotWhenOccupantRemoved = true;
    this->ResetPinningSlotDelayMin = 1;
    this->ResetPinningSlotDelayMax = 1;
    this->AlignmentTag = TEXT("Defeat");
    this->StrugglePinnerLensEffect = NULL;
    this->StrugglePinnerFeedbackClass = NULL;
    this->bResetCameraWhenPinned = true;
    this->ResetCameraInterpSpeed = 1;
    this->ResetCameraExtraPitch = 1;
    this->HeadBone = TEXT("Head");
    this->HipBone = TEXT("Hips");
    this->LeftFootBone = TEXT("LeftFoot");
    this->RightFootBone = TEXT("RightFoot");
    this->CustomCapsuleRadius = 1;
    this->CustomCapsuleExtraLength = 1;
    this->bLookAtIncomingEnemyEnabled = false;
    this->InterpTimeToLookAt = 1;
    this->LookAtDuration = 1;
    this->InterpTimeFromLookAt = 1;
    this->LookAtBone = TEXT("Head");
    this->DelayAfterDeath = 1;
    this->FadeOutTimeAferDeath = 1;
    this->bDeathDepthOfField = false;
    this->DeathDepthOfFieldDelay = 1;
    this->DeathDepthOfFieldTimeToMaxIntensity = 1;
    this->bSpectateEnabled = true;
    this->SpectateFadeInTime = 1;
    this->bAutomaticRespawnEnabled = true;
    this->BaseRespawnDuration = 1;
    this->RespawnDurationIncrements = 1;
    this->MaxRespawnDuration = 1;
    this->bSpareAmmoPersistsAfterRespawn = false;
    this->bWeaponSilencerShotsPersistsAfterRespawn = false;
    this->bSoloPlayAllowLastStand = true;
    this->bSoloPlayReturnToMenuOnDeath = true;
    this->SoloPlayDeathMainMenuDelay = 1;
}
