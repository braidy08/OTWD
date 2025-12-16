#pragma once
#include "CoreMinimal.h"
#include "SBZCurrentAggroTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZCurrentAggroTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    FSBZCurrentAggroTarget();
};

