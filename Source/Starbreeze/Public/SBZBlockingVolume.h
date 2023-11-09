#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZBlockingVolume.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZBlockingVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxBlocker;
    
public:
    ASBZBlockingVolume();
};

