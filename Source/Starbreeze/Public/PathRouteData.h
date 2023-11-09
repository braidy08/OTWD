#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPathNodeUsage.h"
#include "NodeEventExclusionData.h"
#include "NodeEventPlacementData.h"
#include "PathConnection.h"
#include "PathRoute.h"
#include "PathRouteData.generated.h"

class APathNode;

UCLASS(Blueprintable, Const)
class APathRouteData : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathRoute> Routes;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<APathNode*, EPathNodeUsage> NodeUsages;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathConnection> Connections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNodeEventExclusionData GeneralExcludedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNodeEventPlacementData> EventPlacementPriorityOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<APathNode*> UniqueNodesSet;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPassedValidation;
    
public:
    APathRouteData();
};

