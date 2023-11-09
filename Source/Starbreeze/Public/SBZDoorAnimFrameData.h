#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZDoorAnimFrameData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZDoorAnimFrameData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoneLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameTime;
    
public:
    FSBZDoorAnimFrameData();
};

