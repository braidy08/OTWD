#pragma once
#include "CoreMinimal.h"
#include "WoundLimbMapping.h"
#include "SBZExplodeLimbMappingArray.generated.h"

USTRUCT(BlueprintType)
struct FSBZExplodeLimbMappingArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWoundLimbMapping> Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ConnectedWounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSpawnIfConnectedWound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnAngle;
    
    OTWD_API FSBZExplodeLimbMappingArray();
};

