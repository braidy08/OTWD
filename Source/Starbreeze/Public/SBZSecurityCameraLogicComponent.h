#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ESBZSecurityCameraState.h"
#include "OnSecurityCameraAlertDelegate.h"
#include "OnSecurityCameraDestroyedDelegate.h"
#include "OnSecurityCameraDetectionIntervalSignatureDelegate.h"
#include "OnSecurityCameraDisabledDelegate.h"
#include "OnSecurityCameraEnabledDelegate.h"
#include "OnSecurityCameraTargetLostDelegate.h"
#include "OnSecurityCameraTargetSeenDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZSecurityCameraLogicComponent.generated.h"

class AActor;
class APawn;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZSecurityCameraLogicComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSecurityCameraDetectionIntervalSignature OnDetectionInterval;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSecurityCameraTargetLost OnTargetLost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSecurityCameraTargetSeen OnTargetSeen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSecurityCameraAlert OnAlert;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSecurityCameraEnabled OnSecurityCameraEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSecurityCameraDisabled OnSecurityCameraDisabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSecurityCameraDestroyed OnSecurityCameraDestroyed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CameraMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeripheralVisionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalVisionOffsetTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalVisionOffsetBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalVisionAngleDegreesTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalVisionAngleDegreesBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TargetYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TargetPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyedPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraViewDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<APawn>> DetectionClassFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraPanDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilDirectionChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisabledPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraViewSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ESBZSecurityCameraState CurrentState;
    
public:
    USBZSecurityCameraLogicComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TestVisualDetection();
    
    UFUNCTION(BlueprintCallable)
    void StopMovement();
    
    UFUNCTION(BlueprintCallable)
    void SetState(ESBZSecurityCameraState NewState);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnDestroyedSecurityCamera();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PauseMovement();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnSecurityCameraEnabled();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnSecurityCameraDisabled();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnDestroyedSecurityCamera();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSecurityCameraDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossessed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPeripheralVisionAngleCos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumVisibleTargets() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisableSecurityCamera(float TimeDisabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ContinueMovementWithDelay(float Delay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ContinueMovement();
    
};

