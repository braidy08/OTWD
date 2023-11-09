#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZAIManager.generated.h"

class ASBZAIManager;
class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAIManager : public AActor {
    GENERATED_BODY()
public:
    ASBZAIManager();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZAIManager* GetAIManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 BP_GetNumberOfAI(UObject* WorldContextObject);
    
};

