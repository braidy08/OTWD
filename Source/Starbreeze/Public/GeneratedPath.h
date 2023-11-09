#pragma once
#include "CoreMinimal.h"
#include "NodeEventActivationData.h"
#include "NodeUsageData.h"
#include "PathConnection.h"
#include "GeneratedPath.generated.h"

USTRUCT(BlueprintType)
struct STARBREEZE_API FGeneratedPath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathConnection> Connections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNodeUsageData> NodeUsages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNodeEventActivationData> NodeEvents;
    
    FGeneratedPath();
};

