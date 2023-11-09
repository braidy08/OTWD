#pragma once
#include "CoreMinimal.h"
#include "SBZBaseLoadingSubWidget.h"
#include "Templates/SubclassOf.h"
#include "SBZLoadingWidget.generated.h"

class ULocalizedOverlays;
class UMediaPlayer;
class UMediaSource;
class UPanelWidget;
class USBZOverlaySubtitleWidget;
class USBZPartyClientLoadingWidget;
class UTextBlock;
class UWorld;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZLoadingWidget : public USBZBaseLoadingSubWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZOverlaySubtitleWidget> SubtitleWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZPartyClientLoadingWidget> PartyClientLoadingWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVideoSourceOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayingLevelCinematic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMediaSource* CurrentMediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* ProgressContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* ProgressPercentText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* TutorialTipPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TutorialTipCategoryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TutorialTipText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* WaitingForPlayersContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* PartyPlayerWidgetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZOverlaySubtitleWidget* SubtitleWidget;
    
public:
    USBZLoadingWidget();
    UFUNCTION(BlueprintCallable)
    void StopCurrentVideo();
    
    UFUNCTION(BlueprintCallable)
    void SetupWidgets(UMediaPlayer* InMediaPlayer, UPanelWidget* InProgressContainer, UTextBlock* InProgressPercentText, UPanelWidget* InWaitingForPlayersContainer, UPanelWidget* NewTutorialTipPanel, UTextBlock* InTutorialTipCategoryText, UTextBlock* InTutorialTipText, UPanelWidget* InPartyPlayerWidgetContainer);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleSource(ULocalizedOverlays* CurrentOverlay);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PostLoadMap(UWorld* LoadedWorld);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayLoadingVideo(UMediaSource* MediaSource, ULocalizedOverlays* SubtitlesOverlay, bool bLooping, bool bIsLevelCinematic);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleVideoEndReached();
    
    UFUNCTION(BlueprintCallable)
    void HandleMediaOpenFailed(const FString& FailedUrl);
    
    UFUNCTION(BlueprintCallable)
    void HandleMediaOpened(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void HandleMediaClosed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleGameReady();
    
};

