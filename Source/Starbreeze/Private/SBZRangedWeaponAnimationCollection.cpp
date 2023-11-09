#include "SBZRangedWeaponAnimationCollection.h"

USBZRangedWeaponAnimationCollection::USBZRangedWeaponAnimationCollection() {
    this->IdleADS = NULL;
    this->IdleEmpty = NULL;
    this->IdleJammed = NULL;
    this->IdleADSJammed = NULL;
    this->Reload = NULL;
    this->ReloadEmpty = NULL;
    this->ReloadEnter = NULL;
    this->ReloadLoop = NULL;
    this->ReloadExit = NULL;
    this->ReloadEmptyExit = NULL;
    this->CrouchReload = NULL;
    this->Recoil = NULL;
    this->RecoilCrouch = NULL;
    this->RecoilEmpty = NULL;
    this->RecoilJammed = NULL;
    this->RecoilEnter = NULL;
    this->RecoilLoop = NULL;
    this->RecoilExit = NULL;
    this->RecoilADS = NULL;
    this->RecoilADSEnter = NULL;
    this->RecoilADSLoop = NULL;
    this->RecoilADSExit = NULL;
    this->StandRecoilAimOffset = NULL;
    this->CrouchRecoilAimOffset = NULL;
    this->FPPGunKickAimOffset = NULL;
    this->CombatShove = NULL;
    this->Jam = NULL;
    this->UnjamEnter = NULL;
    this->UnjamLoop = NULL;
    this->UnjamExit = NULL;
    this->bCanEnterUnjamLoopFromJam = false;
    this->WalkJammed = NULL;
    this->RunJammedEnter = NULL;
    this->RunJammedLoop = NULL;
    this->RunJammedExit = NULL;
    this->JumpJammedEnter = NULL;
    this->JumpJammedLoop = NULL;
    this->JumpJammedExit = NULL;
    this->ToCrouchJammed = NULL;
    this->ToStandJammed = NULL;
    this->EquipJammed = NULL;
    this->UnequipJammed = NULL;
    this->PointingJammed = NULL;
    this->PointingJammedBlendSpace = NULL;
    this->MantleJammedEnter = NULL;
    this->MantleJammedExit = NULL;
}

