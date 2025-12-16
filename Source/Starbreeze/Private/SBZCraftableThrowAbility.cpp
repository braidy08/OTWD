#include "SBZCraftableThrowAbility.h"
#include "Templates/SubclassOf.h"

USBZCraftableThrowAbility::USBZCraftableThrowAbility() {
    this->CraftingAbility = NULL;
}

TSubclassOf<UGameplayAbility> USBZCraftableThrowAbility::GetCraftableAbility() {
    return NULL;
}


