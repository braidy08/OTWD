#pragma once
#include "CoreMinimal.h"
#include "EPathNodeUsage.h"
#include "NodeEventActivationData.h"
#include "PathGenerator.h"
#include "PathRoute.h"
#include "RouteBasedPathGenerator.generated.h"

class APathNode;

UCLASS(Blueprintable)
class ARouteBasedPathGenerator : public APathGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathRoute> Routes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APathNode*, EPathNodeUsage> NodeUsages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNodeEventActivationData> Events;
    
    ARouteBasedPathGenerator();
};

