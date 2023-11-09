#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZPlayerSpawnGroup.generated.h"

class APlayerStart;

UCLASS(Blueprintable)
class ASBZPlayerSpawnGroup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerStart*> PlayerStarts;
    
    ASBZPlayerSpawnGroup();
};

