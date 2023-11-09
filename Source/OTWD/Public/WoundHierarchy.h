#pragma once
#include "CoreMinimal.h"
#include "WoundSlotMapping.h"
#include "WoundHierarchy.generated.h"

USTRUCT(BlueprintType)
struct FWoundHierarchy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ConnectedWounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWoundSlotMapping SlotMapping;
    
    OTWD_API FWoundHierarchy();
};

