#include "SBZGameplayAbilityThrow.h"

FTransform USBZGameplayAbilityThrow::GetCharacterSpawnOffset() {
    return FTransform{};
}

USBZGameplayAbilityThrow::USBZGameplayAbilityThrow() {
    this->ItemClass = NULL;
    this->ThrowingForce = 1;
    this->bAddCharacterVelocity = false;
    this->SpawnOffsetFromCamera = 1;
    this->AnimationFPP = NULL;
    this->BlendSpaceAnimationFPP = NULL;
    this->EndAnimationFPP = NULL;
    this->EndBlendSpaceAnimationFPP = NULL;
    this->LoopAnimationFPP = NULL;
    this->LoopBlendSpaceAnimationFPP = NULL;
    this->AnimationTPP = NULL;
    this->BlendSpaceAnimationTPP = NULL;
    this->EndAnimationTPP = NULL;
    this->EndBlendSpaceAnimationTPP = NULL;
    this->LoopAnimationTPP = NULL;
    this->LoopBlendSpaceAnimationTPP = NULL;
    this->AnimationCollectionFPP = NULL;
    this->AnimationCollectionTPP = NULL;
    this->DummyClass = NULL;
}

