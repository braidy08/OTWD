#pragma once
#include "CoreMinimal.h"
#include "SBZSpawnManager.h"
#include "OTWDSpawnManager.generated.h"

class AOTWDSpawnManager;
class UObject;

UCLASS(Blueprintable)
class OTWD_API AOTWDSpawnManager : public ASBZSpawnManager {
    GENERATED_BODY()
public:
    AOTWDSpawnManager();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AOTWDSpawnManager* GetSpawnManager(const UObject* WorldContextObject);
    
};

