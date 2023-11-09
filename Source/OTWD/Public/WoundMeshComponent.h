#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "WoundMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UWoundMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UWoundMeshComponent();
};

