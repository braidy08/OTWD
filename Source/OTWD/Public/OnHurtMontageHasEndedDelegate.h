#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=ESBZHurtReactionWeight -FallbackName=ESBZHurtReactionWeight
#include "OnHurtMontageHasEndedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHurtMontageHasEnded, AActor*, InInstigator, ESBZHurtReactionWeight, Weight);

