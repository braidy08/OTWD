#pragma once
#include "CoreMinimal.h"
#include "Starbreeze/Public/ESBZHurtReactionWeight.h"
#include "OnHurtMontageHasEndedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHurtMontageHasEnded, AActor*, InInstigator, ESBZHurtReactionWeight, Weight);

