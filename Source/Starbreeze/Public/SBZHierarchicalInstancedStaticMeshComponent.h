#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "SBZHierarchicalInstancedStaticMeshComponent.generated.h"

class ULevel;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, Within=SBZStaticMeshInstanceManager, meta=(BlueprintSpawnableComponent))
class USBZHierarchicalInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ULevel*, FInt32Interval> LevelToInstanceIndices;
    
public:
    USBZHierarchicalInstancedStaticMeshComponent();
private:
    UFUNCTION(BlueprintCallable)
    bool RemoveInstanceMaintainOrder(int32 InstanceIndex);
    
};

