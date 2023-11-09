#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESBZBTTask_GetWanderLocation_Method.h"
#include "AIRoamingVolume.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class STARBREEZE_API AAIRoamingVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBTTask_GetWanderLocation_Method Method;
    
    AAIRoamingVolume();
};

