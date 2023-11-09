#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EOTWDDefencePhase.h"
#include "OTWDGameplayStatics.generated.h"

class UObject;

UCLASS(Blueprintable)
class OTWD_API UOTWDGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOTWDGameplayStatics();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDefencePhase(UObject* WorldContextObject, EOTWDDefencePhase DefencePhase);
    
};

