#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Components/PostProcessComponent.h"
#include "SBZPostProcessHUDWidget.generated.h"

class APawn;
class APlayerController;
class USBZPostProcessSettingsPresetDataAsset;

UCLASS(Blueprintable)
class STARBREEZE_API USBZPostProcessHUDWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPostProcessSettingsPresetDataAsset* PresetDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostProcessPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostProcessBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat PostProcessPriorityDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat PostProcessBlendWeightDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAttachedToViewport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPostProcessEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComponent;
    
public:
    USBZPostProcessHUDWidget();
    UFUNCTION(BlueprintCallable)
    void SetPostProcessSettings(const USBZPostProcessSettingsPresetDataAsset* InPostProcessSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessPriority(float InPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessEnabled(bool bInIsPostProcessEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessBlendWeight(float InBlendWeight);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHUDStateChanged(bool bInAttachedToViewport);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    APawn* GetOwningPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    APlayerController* GetOwningPlayer() const;
    
};

