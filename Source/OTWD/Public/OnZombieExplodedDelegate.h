#pragma once
#include "CoreMinimal.h"
#include "OnZombieExplodedDelegate.generated.h"

class AZombieCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZombieExploded, AZombieCharacter*, ExplodedZombie);

