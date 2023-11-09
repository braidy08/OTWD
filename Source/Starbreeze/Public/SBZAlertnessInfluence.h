#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessInfluence.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlertnessInfluence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    FSBZAlertnessInfluence();
};

