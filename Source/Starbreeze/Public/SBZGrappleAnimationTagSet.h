#pragma once
#include "CoreMinimal.h"
#include "SBZGrappleAnimationTagSet.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGrappleAnimationTagSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Attacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Victim;
    
    FSBZGrappleAnimationTagSet();
};

