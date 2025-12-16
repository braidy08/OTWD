#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZLevelScriptActor -FallbackName=SBZLevelScriptActor
#include "OTWDLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class OTWD_API AOTWDLevelScriptActor : public ASBZLevelScriptActor {
    GENERATED_BODY()
public:
    AOTWDLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

