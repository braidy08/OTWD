#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZWorldSpawningSettings.generated.h"

USTRUCT(BlueprintType)
struct FSBZWorldSpawningSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ConcealedSpawnerUsageDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ExposedSpawnerUsageDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExposedSpawnerRequiredHiddenDuration;
    
    STARBREEZE_API FSBZWorldSpawningSettings();
};

