#pragma once
#include "CoreMinimal.h"
#include "SBZOnlineSessionSearchResult.generated.h"

USTRUCT(BlueprintType)
struct FSBZOnlineSessionSearchResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Name;
    
    STARBREEZE_API FSBZOnlineSessionSearchResult();
};

