#include "SBZCameraExtension.h"

USBZCameraExtension::USBZCameraExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    this->CameraDataClass = NULL;
    this->CameraMode = ECameraMode::FIRST_PERSON;
}


