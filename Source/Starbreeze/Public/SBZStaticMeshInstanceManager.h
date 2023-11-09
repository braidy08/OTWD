#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZStaticMeshInstanceManager.generated.h"

class ULevel;
class USBZHierarchicalInstancedStaticMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable, NotPlaceable, Transient)
class ASBZStaticMeshInstanceManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOptimizationBatchInProgress: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOptimizationBatchIsAutomatic: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UStaticMesh*, USBZHierarchicalInstancedStaticMeshComponent*> AssetToComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ULevel*> OptimizedLevelSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ULevel*> QueuedAdditionLevelSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ULevel*> QueuedRemovalLevelSet;
    
public:
    ASBZStaticMeshInstanceManager();
    UFUNCTION(BlueprintCallable)
    void OnLevelVisibilityChanged();
    
    UFUNCTION(BlueprintCallable)
    static void K2_EndOptimizationBatch();
    
    UFUNCTION(BlueprintCallable)
    static void K2_BeginOptimizationBatch();
    
};

