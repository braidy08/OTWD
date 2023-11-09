#pragma once
#include "CoreMinimal.h"
#include "OTWDLibrarySeasonData.generated.h"

USTRUCT(BlueprintType)
struct FOTWDLibrarySeasonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SeasonSimpleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SeasonLoreName;
    
    OTWD_API FOTWDLibrarySeasonData();
};

