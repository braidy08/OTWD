#pragma once
#include "CoreMinimal.h"
#include "BoneWoundApplier.generated.h"

USTRUCT(BlueprintType)
struct FBoneWoundApplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WoundIndex;
    
    OTWD_API FBoneWoundApplier();
};

