#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LevelScriptActor.h"
#include "SBZLevelScriptActor.generated.h"

class ASBZObjectiveManager;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    ASBZLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartGame();
    
    UFUNCTION(BlueprintCallable)
    void LogLevelScript(const FString& LogMessage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetInitiallyLoadedSublevels(FRandomStream MissionStream, TArray<TSoftObjectPtr<UWorld>>& OutSublevels) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCreateObjectiveCallbacks(ASBZObjectiveManager* ObjectiveManager);
    
};

