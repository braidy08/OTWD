#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneWoundApplier.h"
#include "DirectionalBoneWoundApplier.generated.h"

USTRUCT(BlueprintType)
struct FDirectionalBoneWoundApplier : public FBoneWoundApplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WoundDirection;
    
    OTWD_API FDirectionalBoneWoundApplier();
};

