#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "SBZHardPointRecruitmentBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZHardPointRecruitmentBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    USBZHardPointRecruitmentBoxComponent();
};

