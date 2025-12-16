#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "SBZEditorShapeVolume.generated.h"

UCLASS(Blueprintable)
class ASBZEditorShapeVolume : public AVolume {
    GENERATED_BODY()
public:
    ASBZEditorShapeVolume(const FObjectInitializer& ObjectInitializer);

};

