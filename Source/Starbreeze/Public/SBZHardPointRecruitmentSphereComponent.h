#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "SBZHardPointRecruitmentSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZHardPointRecruitmentSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
    USBZHardPointRecruitmentSphereComponent();
};

