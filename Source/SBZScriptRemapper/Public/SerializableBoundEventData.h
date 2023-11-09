#pragma once
#include "CoreMinimal.h"
#include "SerializableBoundEventData.generated.h"

USTRUCT(BlueprintType)
struct FSerializableBoundEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DelegatePropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DelegateOwnerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomFunctionName;
    
    SBZSCRIPTREMAPPER_API FSerializableBoundEventData();
};

