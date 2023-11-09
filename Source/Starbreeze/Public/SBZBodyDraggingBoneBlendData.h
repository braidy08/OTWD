#pragma once
#include "CoreMinimal.h"
#include "SBZBodyDraggingBoneBlendData.generated.h"

USTRUCT(BlueprintType)
struct FSBZBodyDraggingBoneBlendData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToBonesBelow;
    
    STARBREEZE_API FSBZBodyDraggingBoneBlendData();
};

