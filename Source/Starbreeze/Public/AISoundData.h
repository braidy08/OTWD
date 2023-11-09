#pragma once
#include "CoreMinimal.h"
#include "AISoundData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FAISoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AISoundMaxRange;
    
    FAISoundData();
};

