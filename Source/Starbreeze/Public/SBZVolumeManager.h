#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AudioType.h"
#include "SBZVolumeTypeSetting.h"
#include "SBZVolumeManager.generated.h"

class USBZVolumeManager;

UCLASS(Blueprintable)
class STARBREEZE_API USBZVolumeManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVolumeTypeSetting MasterVolumeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVolumeTypeSetting MusicVolumeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVolumeTypeSetting SFXVolumeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVolumeTypeSetting VOVolumeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVolumeTypeSetting HUDVolumeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZVolumeTypeSetting VoipVolumeSetting;
    
    USBZVolumeManager();
    UFUNCTION(BlueprintCallable)
    void SetVolume(AudioType Type, float NewVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZVolumeManager* GetVolumeManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ApplySavedVolumes();
    
};

