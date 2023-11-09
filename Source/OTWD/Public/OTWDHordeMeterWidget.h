#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OTWDHordeWidgetLevelSettings.h"
#include "OTWDHordeMeterWidget.generated.h"

class UBorder;
class UImage;
class UMaterialInstanceDynamic;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class OTWD_API UOTWDHordeMeterWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDHordeWidgetLevelSettings> HordeLevelSettingsCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProgressParameterName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* ProgressBarImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* CenterImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* LevelIndicatorImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBorder* NoiseBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* AlarmText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* AlarmImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* AlarmBackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBorder* AlarmBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ProgressBarMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAtMaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAlarmInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasForcedStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* IdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AlarmLoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AlarmStartAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* MaximizedStartAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* MaximizedLoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* NoiseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PreviousPlayedAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ActivationAnim;
    
public:
    UOTWDHordeMeterWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UImage* ProgressImageWidget, UImage* EventImageWidget, UWidgetAnimation* DefaultStateAnimation, UImage* AlarmImageWidget, UWidgetAnimation* DefaultAlarmAnimation, UWidgetAnimation* DefaultAlarmStartAnimation, UWidgetAnimation* MaxStateAnimation, UWidgetAnimation* MaxAlarmLoopingAnimation, UTextBlock* EventTextWidget, UWidgetAnimation* IncreaseAnimation, UImage* StageImageWidget, UImage* DelayedStageImageWidget, UBorder* ColoredBorderWidget, UBorder* ExtraColoredBorderWidget, UWidgetAnimation* ActivationAnimation);
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayMaximizedLoopAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayIdleAnimation();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayActivationAnimation();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHordeTotalProgressChanged(float NewTotalProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnHordeAlarmChanged(bool bAlarmEnabled);
    
};

