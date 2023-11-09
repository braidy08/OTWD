#include "SBZCraftableThrowAbility.h"
#include "Templates/SubclassOf.h"

TSubclassOf<UGameplayAbility> USBZCraftableThrowAbility::GetCraftableAbility() {
    return NULL;
}

USBZCraftableThrowAbility::USBZCraftableThrowAbility() {
    this->CraftingAbility = NULL;
}

