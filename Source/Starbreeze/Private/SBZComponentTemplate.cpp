#include "SBZComponentTemplate.h"

UActorComponent* USBZComponentTemplate::SpawnComponentFromTemplate(USBZComponentTemplate* ComponentTemplate, AActor* Owner, USceneComponent* AttachParent, FName AttachBone) {
    return NULL;
}

UActorComponent* USBZComponentTemplate::GetTemplate() const {
    return NULL;
}

USBZComponentTemplate::USBZComponentTemplate() {
    this->Template = NULL;
}

