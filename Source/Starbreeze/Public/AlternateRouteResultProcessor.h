#pragma once
#include "CoreMinimal.h"
#include "PathConnection.h"
#include "PathResultProcessor.h"
#include "AlternateRouteResultProcessor.generated.h"

class APathNode;

UCLASS(Blueprintable)
class STARBREEZE_API AAlternateRouteResultProcessor : public APathResultProcessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathNode*> NormalRoute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathNode*> AlternateRoute;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathConnection> NormalRouteConnections;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathConnection> AlternateRouteConnections;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathNode*> AlternateRouteInnerNodes;
    
    AAlternateRouteResultProcessor();
};

