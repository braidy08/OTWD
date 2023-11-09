#pragma once
#include "CoreMinimal.h"
#include "OnExplosionSignatureDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExplosionSignature, AController*, ExplosionInstigator);

