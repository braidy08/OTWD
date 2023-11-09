#pragma once
#include "CoreMinimal.h"
#include "SBZGrappleParticipant.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSBZGrappleParticipant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    STARBREEZE_API FSBZGrappleParticipant();
};

