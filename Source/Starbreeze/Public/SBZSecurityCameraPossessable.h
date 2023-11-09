#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Templates/SubclassOf.h"
#include "SBZSecurityCameraPossessable.generated.h"

class AActor;
class ACharacter;
class UCameraComponent;
class USBZSecurityCameraLogicComponent;
class USBZSecurityCameraSwitcherComponent;
class UStaticMeshComponent;
class UUserWidget;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZSecurityCameraPossessable : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> VisibleActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CameraArmMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CameraMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* PossessedByCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSecurityCameraLogicComponent* SecurityCameraLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSecurityCameraSwitcherComponent* SecurityCameraSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PossessedRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumMovementDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> HUDMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableControl;
    
public:
    ASBZSecurityCameraPossessable();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UnpossessSecurityCamera(float Pitch, float Yaw);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SetTargetPitchYaw(float Pitch, float Yaw);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetCameraOrientation(float Pitch, float Yaw, float FOV);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PossessSecurityCamera(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PossessPreviousSecurityCamera(float Pitch, float Yaw);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_PossessNextSecurityCamera(float Pitch, float Yaw);
    
public:
    UFUNCTION(BlueprintCallable)
    void PossessSecurityCamera(ACharacter* Character);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSecurityCameraDestroyed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnUnpossessedSecurityCameraDestroyed();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnUnpossessedSecurityCamera(float Pitch, float Yaw);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnPossessedSecurityCamera();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnZoomCamera(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnTargetExitCameraView(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnTargetEnterCameraView(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnSecurityCameraUnpossessed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnSecurityCameraPossessed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSecurityCameraDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossessedByPlayer() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnPossess();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPossess() const;
    
};

