#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZEmptyActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ASBZEmptyActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* Scene;
    
    ASBZEmptyActor();
};

