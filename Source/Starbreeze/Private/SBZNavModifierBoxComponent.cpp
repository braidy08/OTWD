#include "SBZNavModifierBoxComponent.h"
#include "Templates/SubclassOf.h"

USBZNavModifierBoxComponent::USBZNavModifierBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->AreaClass = NULL;
}

void USBZNavModifierBoxComponent::SetAreaClass(TSubclassOf<UNavArea> NewAreaClass) {
}


