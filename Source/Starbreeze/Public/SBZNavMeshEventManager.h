#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZNavMeshEventManager.generated.h"

class ASBZNavMeshEventManager;
class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZNavMeshEventManager : public AActor {
    GENERATED_BODY()
public:
    ASBZNavMeshEventManager();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZNavMeshEventManager* GetNavMeshEventManager(UObject* WorldContextObject);
    
};

