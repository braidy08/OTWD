#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZBaseSpawnBehaviour -FallbackName=SBZBaseSpawnBehaviour
#include "RoamingPatrolSpawnBehaviour.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API URoamingPatrolSpawnBehaviour : public USBZBaseSpawnBehaviour {
    GENERATED_BODY()
public:
    URoamingPatrolSpawnBehaviour();

};

