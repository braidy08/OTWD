#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "SBZHardPointRecruitmentBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZHardPointRecruitmentBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    USBZHardPointRecruitmentBoxComponent(const FObjectInitializer& ObjectInitializer);

};

