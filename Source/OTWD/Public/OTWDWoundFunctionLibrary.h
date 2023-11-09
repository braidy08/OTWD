#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OTWDWoundSlots.h"
#include "Templates/SubclassOf.h"
#include "OTWDWoundFunctionLibrary.generated.h"

class AOTWDWoundReferenceActor;
class UMeshComponent;

UCLASS(Blueprintable)
class OTWD_API UOTWDWoundFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOTWDWoundFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void ApplyWoundSlotDataWithTransforms(UMeshComponent* MeshComponent, const TArray<FTransform>& WoundTransforms, const FOTWDWoundSlots& Slots);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyWoundSlotDataWithReferenceActor(UMeshComponent* MeshComponent, TSubclassOf<AOTWDWoundReferenceActor> WoundReferenceActorClass, const FOTWDWoundSlots& Slots);
    
};

