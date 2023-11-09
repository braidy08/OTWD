#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZSpawnPointData.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZSpawnPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    FSBZSpawnPointData();
};

