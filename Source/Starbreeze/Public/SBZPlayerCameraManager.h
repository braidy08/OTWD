#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "SBZCameraViewRestriction.h"
#include "SBZLifeTimeLensParticleHandle.h"
#include "Components/PostProcessComponent.h"
#include "SBZPlayerCameraManager.generated.h"

class AActor;
class UParticleSystem;
class UParticleSystemComponent;
class USBZDepthOfFieldComponent;
class USBZPlayerCameraFeedbackComponent;

UCLASS(Blueprintable, NonTransient)
class STARBREEZE_API ASBZPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* GrapplePostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZDepthOfFieldComponent* DepthOfFieldComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* DefaultDepthOfFieldComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPlayerCameraFeedbackComponent* PlayerCameraFeedbackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDOFMaxDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LensEffectParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZLifeTimeLensParticleHandle> LifeTimeLensParticleHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator LeftoverDeltaRot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZCameraViewRestriction> ActiveCameraViewRestrictions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveCameraViewRestrictionId;
    
public:
    ASBZPlayerCameraManager();
    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* SpawnLensParticleEffect(UParticleSystem* ParticleSystem, float LifeTime);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCameraViewRestriction(FSBZCameraViewRestriction& RestrictionSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZPlayerCameraFeedbackComponent* GetPlayerCameraFeedbackComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentVerticalTopFOV();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentVerticalFOV();
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateCameraViewRestriction(FSBZCameraViewRestriction& RestrictionSettings);
    
};

