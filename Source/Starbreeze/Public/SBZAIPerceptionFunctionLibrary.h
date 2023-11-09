#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "SBZAIPerceptionFunctionLibrary.generated.h"

class AActor;
class UAISense;
class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API USBZAIPerceptionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZAIPerceptionFunctionLibrary();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool UnregisterPerceptionStimuliSource(UObject* WorldContext, TSubclassOf<UAISense> Sense, AActor* Target);
    
};

