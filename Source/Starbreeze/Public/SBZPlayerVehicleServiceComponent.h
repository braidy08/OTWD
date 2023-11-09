#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZVehicleServiceComponent.h"
#include "SBZPlayerVehicleServiceComponent.generated.h"

class ASBZVehicle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPlayerVehicleServiceComponent : public USBZVehicleServiceComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ASBZVehicle* Vehicle;
    
public:
    USBZPlayerVehicleServiceComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetViewYawLimit(float ViewYawMin, float ViewYawMax);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnPreviousSeat();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnNextSeat();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DetachFromVehicleSeat();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPC_OnPossessVehicleSeat();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPC_OnPossessVehicle(FVector RelativeLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPC_OnExitVehicle(FVector ExitLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPC_OnDetachFromVehicleSeat(FVector ExitLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPC_OnAttachToVehicleSeat();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnPossessVehicle_CameraSetup(ASBZVehicle* TargetVehicle);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnExitVehicle_CameraReset();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnAttachToSeat_CameraSetup_LimitYaw(ASBZVehicle* TargetVehicle, float YawMin, float YawMax);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnAttachToSeat_CameraSetup_FreeYaw(ASBZVehicle* TargetVehicle);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnPossesVehicle();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnDetachFromVehicleSeat();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnAttachToVehicleSeat();
    
};

