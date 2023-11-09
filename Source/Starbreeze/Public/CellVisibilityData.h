#pragma once
#include "CoreMinimal.h"
#include "CellVisibilityData.generated.h"

USTRUCT(BlueprintType)
struct FCellVisibilityData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CellAddressHash;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 VisibleCellRangeBegin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 VisibleCellRangeEnd;
    
    STARBREEZE_API FCellVisibilityData();
};

