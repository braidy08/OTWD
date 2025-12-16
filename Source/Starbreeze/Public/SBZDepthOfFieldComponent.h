#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessComponent -FallbackName=PostProcessComponent
#include "SBZDepthOfFieldSettings.h"
#include "SBZDepthOfFieldComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZDepthOfFieldComponent : public UPostProcessComponent {
    GENERATED_BODY()
public:
    USBZDepthOfFieldComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartDOF(const FSBZDepthOfFieldSettings& InSettings, float BlendInTime);
    
    UFUNCTION(BlueprintCallable)
    void SetFocalDistance(float InDistance);
    
    UFUNCTION(BlueprintCallable)
    void ClearDOF(float BlendOutTime);
    
};

