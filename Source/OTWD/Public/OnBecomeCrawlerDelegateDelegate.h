#pragma once
#include "CoreMinimal.h"
#include "OnBecomeCrawlerDelegateDelegate.generated.h"

class AZombieCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBecomeCrawlerDelegate, AZombieCharacter*, Zombie);

