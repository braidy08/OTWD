#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OTWDMetagameCurrency.h"
#include "OTWDMetagameCurrencyRewards.h"
#include "OTWDMetagameFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class OTWD_API UOTWDMetagameFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOTWDMetagameFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FOTWDMetagameCurrency EvaluateCurrencyRewards(const FOTWDMetagameCurrencyRewards& Rewards, float Ratio);
    
};

