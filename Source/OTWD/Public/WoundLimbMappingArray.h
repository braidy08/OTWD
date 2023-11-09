#pragma once
#include "CoreMinimal.h"
#include "WoundLimbMapping.h"
#include "WoundLimbMappingArray.generated.h"

USTRUCT(BlueprintType)
struct FWoundLimbMappingArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysSpawnMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWoundLimbMapping> Array;
    
    OTWD_API FWoundLimbMappingArray();
};

