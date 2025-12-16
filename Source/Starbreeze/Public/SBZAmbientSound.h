#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZAmbientSound.generated.h"

class UActorComponent;
class UAkAudioEvent;
class USBZAmbientSoundComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAmbientSound : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActiveAreaAttenuationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAmbientSoundComponent* AmbientSoundComponent;
    
public:
    ASBZAmbientSound(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void HandleDeactivateSoundComponent(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void HandleActivateSoundComponent(UActorComponent* Component, bool bReset);
    
};

