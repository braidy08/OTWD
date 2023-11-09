#include "SBZAnimNotify_MakeNoise.h"

void USBZAnimNotify_MakeNoise::MakeNoise(ASBZCharacter* InCharacter, USkeletalMeshComponent* InMesh, UObject* InWorldContextObject) const {
}

USBZAnimNotify_MakeNoise::USBZAnimNotify_MakeNoise() {
    this->NoiseSchematic = NULL;
    this->NoiseType = EAISoundType::NotSpecified;
    this->Delay = 1;
}

