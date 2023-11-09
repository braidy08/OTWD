#pragma once
#include "CoreMinimal.h"
#include "SBZAlignmentSlotFlags.h"
#include "SBZAlignmentSlotSettings_NetQuantize.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlignmentSlotSettings_NetQuantize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Data1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Data2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Data3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SocketToAlignToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZAlignmentSlotFlags SlotFlags;
    
    FSBZAlignmentSlotSettings_NetQuantize();
};

