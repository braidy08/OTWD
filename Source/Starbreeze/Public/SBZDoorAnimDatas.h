#pragma once
#include "CoreMinimal.h"
#include "SBZDoorAnimFrameData.h"
#include "SBZDoorAnimDatas.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZDoorAnimDatas {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZDoorAnimFrameData> FrameDatas;
    
public:
    FSBZDoorAnimDatas();
};

