#pragma once
#include "CoreMinimal.h"
#include "Components/PostProcessComponent.h"
#include "Components/ActorComponent.h"
#include "SBZDepthOfFieldSettings.h"
#include "SBZDepthOfFieldComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZDepthOfFieldComponent : public USceneComponent {//UPostProcessComponent {
    GENERATED_BODY()
public:
    USBZDepthOfFieldComponent();
    UFUNCTION(BlueprintCallable)
    void StartDOF(const FSBZDepthOfFieldSettings& InSettings, float BlendInTime);
    
    UFUNCTION(BlueprintCallable)
    void SetFocalDistance(float InDistance);
    
    UFUNCTION(BlueprintCallable)
    void ClearDOF(float BlendOutTime);
    
};

