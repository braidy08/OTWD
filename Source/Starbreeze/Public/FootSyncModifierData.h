#pragma once
#include "CoreMinimal.h"
#include "BoneData.h"
#include "EAnimationDirection.h"
#include "FootSyncModifierData.generated.h"

USTRUCT(BlueprintType)
struct FFootSyncModifierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneData> FootBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimationDirection AnimDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimDirectionYaw;
    
    STARBREEZE_API FFootSyncModifierData();
};

