#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBaseLoadingSubWidget.h"
#include "SBZOverlaySubtitleWidget.generated.h"

class ULocalizedOverlays;
class UMediaPlayer;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZOverlaySubtitleWidget : public USBZBaseLoadingSubWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULocalizedOverlays* CurrentOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayerRef;
    
public:
    USBZOverlaySubtitleWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateText(FTimespan AtTime);
    
    UFUNCTION(BlueprintCallable)
    void StopPlayingSubtitles();
    
    UFUNCTION(BlueprintCallable)
    void StartPlayingSubtitles(const FString& MediaSource);
    
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UTextBlock* SubtitleTextWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlay(ULocalizedOverlays* InOverlay);
    
    UFUNCTION(BlueprintCallable)
    void SetMediaPlayerRef(UMediaPlayer* InMediaPlayerRef);
    
};

