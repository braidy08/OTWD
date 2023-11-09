#include "SBZCraftableAbility.h"
#include "Templates/SubclassOf.h"

TSubclassOf<UGameplayAbility> USBZCraftableAbility::GetCraftableAbility() {
    return NULL;
}

USBZCraftableAbility::USBZCraftableAbility() {
    this->CraftingAbility = NULL;
}

