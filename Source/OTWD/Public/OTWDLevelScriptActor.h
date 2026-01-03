#pragma once
#include "CoreMinimal.h"
#include "Starbreeze/Public/SBZLevelScriptActor.h"
#include "OTWDLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class OTWD_API AOTWDLevelScriptActor : public ASBZLevelScriptActor {
    GENERATED_BODY()
public:
    AOTWDLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

