#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "ESBZChatSettings.h"
#include "ESBZTutorialTipSettings.h"
#include "SBZGameUserSettings.generated.h"

class USBZGameInstance;

UCLASS(Blueprintable)
class STARBREEZE_API USBZGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SBZVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerActionHoldToRun;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerActionHoldToADS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerActionHoldToCrouch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerActionHoldToProne;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerActionHoldToPeek;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerActionHoldForTabMenu;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleOutlines;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleKillIndicator;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleHitIndicator;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceFeedbackEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FieldOfView;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MasterVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SFXVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MusicVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VOVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HUDVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoipVolume;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Gamma;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SkyboundLoggedInUserEmail;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bYAxisInverted;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMouseSmoothing;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastConfirmedMouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadHorizontalSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadVerticalSensitivity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZChatSettings ChatSetting;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZTutorialTipSettings TipSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitlesEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubtitleSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVoipEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushToTalk;
    
public:
    USBZGameUserSettings();
    UFUNCTION(BlueprintCallable)
    void SetZoomSensitivity(float InSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetVOVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetVoipVolumeSetting(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetVoipEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetVideoToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialTips(ESBZTutorialTipSettings InTipSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleSize(int32 InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesEnabled(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetSkyboundLoggedInUserEmail(const FString& InUserEmail);
    
    UFUNCTION(BlueprintCallable)
    void SetSFXVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetPushToTalk(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetOutlineVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSmoothingEnabled(bool bInEnableMouseSmoothing);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivity(float InMouseSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetLastConfirmedMouseSensitivity(float Val);
    
    UFUNCTION(BlueprintCallable)
    void SetKillIndicatorVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertedYAxis(bool bIsInverted, USBZGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetHitIndicatorVisible(bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetGamma(float InGamma);
    
    UFUNCTION(BlueprintCallable)
    void SetGameplayToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadVerticalSensitivity(float InSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadHorizontalSensitivity(float InSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetForceFeedbackEnabled(bool Val);
    
    UFUNCTION(BlueprintCallable)
    void SetChatSetting(ESBZChatSettings InChatSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraFOV(const int32 InFOV);
    
    UFUNCTION(BlueprintCallable)
    void SetAudioToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void SetActionHoldToRun(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetActionHoldToProne(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetActionHoldToPeek(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetActionHoldToCrouch(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetActionHoldToADS(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetActionHoldForTabMenu(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void ResolutionChanged(const int32 SelectedIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutlineVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKillIndicatorVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHitIndicatorVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionHoldToRunEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionHoldToProneEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionHoldToPeekEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionHoldToCrouchEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionHoldToADSEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionHoldForTabMenuEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetZoomSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVOVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoipVolumeSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoipVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoipEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZTutorialTipSettings GetTutorialTips() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetSupportedResolutions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubtitleSize();
    
    UFUNCTION(BlueprintCallable)
    FString GetSkyboundLoggedInUserEmail();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSFXVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPushToTalk() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseSmoothingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMonitorCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMasterVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastConfirmedMouseSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInvertedYAxis() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHUDVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamma() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamepadVerticalSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGamepadHorizontalSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetForceFeedbackEnabled();
    
    UFUNCTION(BlueprintCallable)
    FString GetCurrentResolutionString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZChatSettings GetChatSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCameraHorizontalFOV(bool bUseLastConfirmedResolution) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCameraFOV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreSubtitlesEnabled();
    
    UFUNCTION(BlueprintCallable)
    void ApplyGamma();
    
};

