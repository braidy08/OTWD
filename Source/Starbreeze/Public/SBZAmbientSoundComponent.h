#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBZAmbientSoundComponent.generated.h"

class UAkAudioEvent;
class UAkComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAmbientSoundComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveAreaAttenuationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> AudioSwitches;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AmbientAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AttenuationSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSoundComponentEnabled;
    
public:
    USBZAmbientSoundComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSwitchState(const FString& InSwitchGroup, const FString& InSwitchState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAmbientSoundComponentEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttenuation() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableAmbientSoundComponent();
    
    UFUNCTION(BlueprintCallable)
    void DisableAmbientSoundComponent(UAkAudioEvent* AkAudioCloseEvent, const FString& NewEventName);
    
};

