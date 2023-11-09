#pragma once
#include "CoreMinimal.h"
#include "WoundSlotMapping.generated.h"

USTRUCT(BlueprintType)
struct FWoundSlotMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WoundIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WoundIndexSlot;
    
    OTWD_API FWoundSlotMapping();
};

