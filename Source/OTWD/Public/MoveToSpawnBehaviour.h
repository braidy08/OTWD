#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZMoveToSpawnBehaviour -FallbackName=SBZMoveToSpawnBehaviour
#include "MoveToSpawnBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UMoveToSpawnBehaviour : public USBZMoveToSpawnBehaviour {
    GENERATED_BODY()
public:
    UMoveToSpawnBehaviour();

};

