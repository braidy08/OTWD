#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AimTargetOffsetData.generated.h"

USTRUCT(BlueprintType)
struct FAimTargetOffsetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetPosition;
    
    STARBREEZE_API FAimTargetOffsetData();
};

