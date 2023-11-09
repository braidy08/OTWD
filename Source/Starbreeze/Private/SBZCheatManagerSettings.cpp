#include "SBZCheatManagerSettings.h"
#include "Templates/SubclassOf.h"

TArray<TSoftClassPtr<AActor>> USBZCheatManagerSettings::GetQuickSummonActorClasses() {
    return TArray<TSoftClassPtr<AActor>>();
}

TSubclassOf<AActor> USBZCheatManagerSettings::GetQuickSummonActorClassByName(const FString& Name) {
    return NULL;
}

USBZCheatManagerSettings::USBZCheatManagerSettings() {
    this->QuickSummonActorClasses.AddDefaulted(18);
}

