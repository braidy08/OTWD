#include "SBZGameplayAbilityDataCollection.h"
#include "Templates/SubclassOf.h"

USBZGameplayAbilityDataCollection::USBZGameplayAbilityDataCollection() {
}

USBZGameplayAbilityData* USBZGameplayAbilityDataCollection::FindDataForGameplayAbility(TSubclassOf<UGameplayAbility> GameplayAbilityClass) const {
    return NULL;
}

void USBZGameplayAbilityDataCollection::CollectGameplayAbilityData() const {
}


