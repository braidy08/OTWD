#pragma once
#include "CoreMinimal.h"
#include "SBZGrappleTags.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FSBZGrappleTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Tags;
    
    FSBZGrappleTags();
};

