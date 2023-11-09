#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SBZAIStanceIdHelper.h"
#include "SBZSpawnerFunctionLibrary.generated.h"

class AActor;
class UObject;
class USBZActAnimationSetSchematic;
class USBZActSpawnBehaviour;

UCLASS(Blueprintable)
class STARBREEZE_API USBZSpawnerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZSpawnerFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static bool ConstructMoveToActSpawnBehavior(USBZActSpawnBehaviour*& OutBehavior, UObject* Outer, bool bUseActorTransform, AActor* Actor, FVector Location, bool bUseRandomBox, FTransform BoxTransfrom, FVector BoxExtent, FSBZAIStanceIdHelper Stance, bool bForced);
    
    UFUNCTION(BlueprintCallable)
    static bool ConstructAnimationActSpawnBehavior(USBZActSpawnBehaviour*& OutBehavior, UObject* Outer, USBZActAnimationSetSchematic* AnimationSet, bool bLoopingUsingAnimation, float UsingAnimationDuration);
    
};

