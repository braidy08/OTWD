#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "SBZLevelScriptActor.generated.h"

class ASBZObjectiveManager;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZLevelScriptActor : public ALevelScriptActor {
    GENERATED_BODY()
public:
    ASBZLevelScriptActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartGame();
    
    UFUNCTION(BlueprintCallable)
    void LogLevelScript(const FString& LogMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCreateObjectiveCallbacks(ASBZObjectiveManager* ObjectiveManager);
    
};

