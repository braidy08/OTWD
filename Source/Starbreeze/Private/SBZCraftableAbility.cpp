#include "SBZCraftableAbility.h"
#include "Templates/SubclassOf.h"

USBZCraftableAbility::USBZCraftableAbility() {
    this->CraftingAbility = NULL;
}

TSubclassOf<UGameplayAbility> USBZCraftableAbility::GetCraftableAbility() {
    return NULL;
}


