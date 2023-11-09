#pragma once
#include "CoreMinimal.h"
#include "SBZProfileInfo.generated.h"

USTRUCT(BlueprintType)
struct FSBZProfileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 PowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LevelIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BitFlags;
    
    STARBREEZE_API FSBZProfileInfo();
};

