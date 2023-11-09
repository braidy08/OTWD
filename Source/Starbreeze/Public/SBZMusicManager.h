#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZMusicManager.generated.h"

class UAkAudioBank;
class UAkAudioEvent;
class USBZMusicManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZMusicManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VolumeRTPC;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioBank*> SoundBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> DefaultSwitches;
    
public:
    USBZMusicManager();
    UFUNCTION(BlueprintCallable)
    void StopMusic();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float NewVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetSwitch(FName SwitchGroup, FName SwitchState);
    
    UFUNCTION(BlueprintCallable)
    void SetRTPCValue(FName RTPC, float RTPCValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMuted(bool bInMuted);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultSwitches();
    
    UFUNCTION(BlueprintCallable)
    void PlayMusic(UAkAudioEvent* AudioEvent, bool bStopCurrent);
    
    UFUNCTION(BlueprintCallable)
    void PlayDefaultMusic(bool bStopCurrent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMuted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZMusicManager* GetMusicManager(UObject* WorldContextObject);
    
};

