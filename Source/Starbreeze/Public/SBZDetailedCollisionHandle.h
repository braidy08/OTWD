#pragma once
#include "CoreMinimal.h"
#include "SBZDetailedCollisionHandle.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZDetailedCollisionHandle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsWithActivatedDetailedCollision;
    
public:
    STARBREEZE_API FSBZDetailedCollisionHandle();
};

