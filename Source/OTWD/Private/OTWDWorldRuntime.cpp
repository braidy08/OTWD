#include "OTWDWorldRuntime.h"
#include "SBZActorContainer.h"

UOTWDWorldRuntime::UOTWDWorldRuntime() {
    this->AllZombiePawns = CreateDefaultSubobject<USBZActorContainer>(TEXT("AllZombiesPawns"));
}

UOTWDWorldRuntime* UOTWDWorldRuntime::Get(const UObject* WorldContextObject) {
    return NULL;
}


