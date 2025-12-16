#pragma once
#include "CoreMinimal.h"
#include "SBZOutroMovieConfig.h"
#include "SBZOutroMovieConfigFilter.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZOutroMovieConfigFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOutroMovieConfig MovieConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<APawn>> PlayerRequirementSet;
    
    FSBZOutroMovieConfigFilter();
};

