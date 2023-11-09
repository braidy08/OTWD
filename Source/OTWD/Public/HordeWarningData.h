#pragma once
#include "CoreMinimal.h"
#include "HordeWarningData.generated.h"

USTRUCT(BlueprintType)
struct OTWD_API FHordeWarningData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarnBuildPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DialogEventName;
    
    FHordeWarningData();
};

