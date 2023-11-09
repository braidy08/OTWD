#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AccessPointData.h"
#include "GeneratedPath.h"
#include "PathNetworkData.h"
#include "PathController.generated.h"

class APathNode;
class APathResultProcessor;
class APathRouteData;
class UAccessPointType;
class UPathPathfinder;

UCLASS(Blueprintable)
class STARBREEZE_API APathController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccessPointData> AccessPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathNode*> NetworkBuildingNodes;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPathNetworkData CurrentNetworkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseProceduralGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPathPathfinder* Pathfinder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathResultProcessor*> ResultProcessors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APathRouteData*> PathRouteDataActors;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeneratedPath CurrentGeneratedPath;
    
    APathController();
    UFUNCTION(BlueprintCallable)
    bool SetAccessPointFlags(const UAccessPointType* AccessPointType, const int32 Flags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetPath();
    
    UFUNCTION(BlueprintCallable)
    bool HasAccessPointType(const UAccessPointType* AccessPointType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyPath(int32 PathSeed);
    
};

