#pragma once
#include "CoreMinimal.h"
#include "OTWDWoundEffect.h"
#include "WoundLimbMapping.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FWoundLimbMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* LimbToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneToSpawnLimbAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDWoundEffect LimbEffect;
    
    OTWD_API FWoundLimbMapping();
};

