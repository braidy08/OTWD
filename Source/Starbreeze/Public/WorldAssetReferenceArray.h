#pragma once
#include "CoreMinimal.h"
#include "WorldAssetReferenceArray.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct STARBREEZE_API FWorldAssetReferenceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> Assets;
    
    FWorldAssetReferenceArray();
};

