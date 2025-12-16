#include "SBZCheatManagerSettings.h"
#include "Templates/SubclassOf.h"

USBZCheatManagerSettings::USBZCheatManagerSettings() {
    this->QuickSummonActorClasses.AddDefaulted(20);
}

TArray<TSoftClassPtr<AActor>> USBZCheatManagerSettings::GetQuickSummonActorClasses() {
    return TArray<TSoftClassPtr<AActor>>();
}

TSubclassOf<AActor> USBZCheatManagerSettings::GetQuickSummonActorClassByName(const FString& Name) {
    return NULL;
}


