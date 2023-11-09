#pragma once
#include "CoreMinimal.h"
#include "SBZTargetAggro.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZTargetAggro {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    FSBZTargetAggro();
};

