#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SBZTextBannerData.h"
#include "SBZTextBannerWidget.generated.h"

class UAkAudioEvent;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZTextBannerWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZTextBannerData> BannerBacklog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* BannerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OverrideAnim;
    
public:
    USBZTextBannerWidget();
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UTextBlock* BannerTextWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetupAnimations(UWidgetAnimation* FadeInAnimation, UWidgetAnimation* FadeOutAnimation, UWidgetAnimation* OverrideAnimation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnShowHUDBannerText(FText LocalisedText, float Duration, bool bShowImmediate, UAkAudioEvent* SoundEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnFadeOutFinished();
    
};

