#pragma once
#include "CoreMinimal.h"
#include "SBZAlertnessLevelIdHelper.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZAlertnessLevelIdHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LevelId;
    
    FSBZAlertnessLevelIdHelper();
};
FORCEINLINE uint32 GetTypeHash(const FSBZAlertnessLevelIdHelper) { return 0; }

