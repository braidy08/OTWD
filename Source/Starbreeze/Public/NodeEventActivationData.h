#pragma once
#include "CoreMinimal.h"
#include "NodeEventActivationData.generated.h"

class APathNodeEvent;
class UNodeEventCategory;

USTRUCT(BlueprintType)
struct STARBREEZE_API FNodeEventActivationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APathNodeEvent> Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNodeEventCategory> Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APathNodeEvent> SuppressingEvent;
    
    FNodeEventActivationData();
};

