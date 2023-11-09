#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "ESBZEndMissionHandlerState.h"
#include "OnMissionTimerRunningDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZEndMissionHandler.generated.h"

class ASBZEndMissionHandler;
class UAkAudioEvent;
class UObject;
class USBZEndMissionSettingsSchematic;
class USBZGameInstance;
class UUserWidget;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZEndMissionHandler : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionTimerRunning OnMissionTimerRunningEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZEndMissionSettingsSchematic* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StateData, meta=(AllowPrivateAccess=true))
    ESBZEndMissionHandlerState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGameInstance* SBZGameInstance;
    
public:
    ASBZEndMissionHandler();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(USBZEndMissionSettingsSchematic* InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetEndMissionWidget(TSubclassOf<UUserWidget> InWidgetClass, bool bSuccessWidget, bool bNeutralWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetEndMissionTimers(float SuccessCountdownDuration, float SuccessDuration, float FailureDuration, float NeutralCountdownDuration, float NeutralDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetEndMissionDialog(FName InDialogID, bool bSuccessEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetEndMissionAudioEvent(UAkAudioEvent* InAudioEvent, bool bSuccessEvent);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_StateData(ESBZEndMissionHandlerState OldState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWinStateCountdownDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingWinStateCountdownTimeFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingWinStateCountdownTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASBZEndMissionHandler* GetEndMissionHandler(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZEndMissionHandlerState GetCurrentState() const;
    
};

