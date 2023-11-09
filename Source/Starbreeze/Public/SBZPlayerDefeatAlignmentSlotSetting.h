#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerDefeatAlignmentSlotSetting.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZPlayerDefeatAlignmentSlotSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleMaxRandomOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlignSocketName;
    
    FSBZPlayerDefeatAlignmentSlotSetting();
};

