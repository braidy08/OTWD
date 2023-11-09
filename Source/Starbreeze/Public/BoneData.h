#pragma once
#include "CoreMinimal.h"
#include "BoneData.generated.h"

USTRUCT(BlueprintType)
struct FBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoneOffset;
    
    STARBREEZE_API FBoneData();
};

