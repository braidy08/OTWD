#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AIPatrolVolume.generated.h"

class UBoxComponent;

UCLASS(Abstract, Blueprintable)
class OTWD_API AAIPatrolVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NoOfPatrolPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    AAIPatrolVolume();
};

