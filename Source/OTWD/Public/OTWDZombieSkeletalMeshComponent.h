#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "OTWDZombieSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDZombieSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UOTWDZombieSkeletalMeshComponent();
};

