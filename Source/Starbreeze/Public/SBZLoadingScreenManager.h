#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESBZGameMachineStateError.h"
#include "SBZCinematicLoadingData.h"
#include "SBZTutorialTipDataAsset.h"
#include "SBZTutorialTipsCategory.h"
#include "Templates/SubclassOf.h"
#include "SBZLoadingScreenManager.generated.h"

class APlayerState;
class ULocalizedOverlays;
class UMediaSource;
class USBZLevelSchematic;
class USBZLoadingWidget;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZLoadingScreenManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTutorialTipsCategory LoreTipCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTutorialTipsCategory TutorialTipCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaSource* DefaultLoadingVideo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZCinematicLoadingData TransitionLoadingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLoadingWidget> LoadingWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCinematicLoadingData> CinematicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLoadingWidget* LoadingWidget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceStopCinematicTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTipTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAsyncLoadingProgress;
    
public:
    USBZLoadingScreenManager();
protected:
    UFUNCTION(BlueprintCallable)
    void SetupLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    void PlayerRemoved(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void PlayerAdded(APlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingScreenActive() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleWaitActionPhaseFailed(ESBZGameMachineStateError ErrorReason);
    
    UFUNCTION(BlueprintCallable)
    void HandleWaitActionPhaseEntered();
    
    UFUNCTION(BlueprintCallable)
    void HandleSeamlessTravelFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleReturnToMainMenuWaitOtherPlayersStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleReturnToMainMenuStopped();
    
    UFUNCTION(BlueprintCallable)
    void HandleReturnToMainMenuStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleCinematicStopped();
    
    UFUNCTION(BlueprintCallable)
    void HandleCinematicStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleAsyncLoadStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleAsyncLoadProgressUpdated(float InProgress);
    
    UFUNCTION(BlueprintCallable)
    void HandleAsyncLoadComplete();
    
    UFUNCTION(BlueprintCallable)
    void HandleActionPhaseEntered();
    
    UFUNCTION(BlueprintCallable)
    ULocalizedOverlays* GetSubtitles(USBZLevelSchematic* Schematic, bool bWithoutCinematic);
    
    UFUNCTION(BlueprintCallable)
    void GetRandomTutorialTip(FSBZTutorialTipDataAsset& Tooltip, FText& InTipCategoryText);
    
    UFUNCTION(BlueprintCallable)
    UMediaSource* GetMediaSource(USBZLevelSchematic* Schematic, bool bWithoutCinematic);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZCinematicLoadingData GetCinematicData(USBZLevelSchematic* Schematic) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ForceStopCinematic();
    
};

