#pragma once
#include "CoreMinimal.h"
#include "NodeEventMap.generated.h"

class APathNodeEvent;

USTRUCT(BlueprintType)
struct FNodeEventMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APathNodeEvent*, bool> ExcludedEventChoices;
    
    STARBREEZE_API FNodeEventMap();
};

