#pragma once
#include "CoreMinimal.h"
#include "WorldAssetReference.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct STARBREEZE_API FWorldAssetReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Asset;
    
    FWorldAssetReference();
};

