#pragma once
#include "CoreMinimal.h"
#include "SBZUIDebuggerOptions.generated.h"

USTRUCT(BlueprintType)
struct FSBZUIDebuggerOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipIntroMovies;
    
    STARBREEZE_API FSBZUIDebuggerOptions();
};

