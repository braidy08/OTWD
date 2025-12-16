#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "SBZSpawnRegionBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZSpawnRegionBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    USBZSpawnRegionBoxComponent(const FObjectInitializer& ObjectInitializer);

};

