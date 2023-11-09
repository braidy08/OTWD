#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WheeledVehicle.h"
#include "Templates/SubclassOf.h"
#include "SBZVehicle.generated.h"

class APawn;
class USBZBaseInteractorComponent;
class USBZCameraExtension;
class USBZChargeModule;
class USBZInteractableComponent;
class USBZVehicleDriverComponent;
class USBZVehicleSeatComponent;
class USphereComponent;
class UUserWidget;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZVehicle : public AWheeledVehicle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FPCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZVehicleDriverComponent* DriverSeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* Interaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* AvoidanceSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APawn* DriverPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCameraExtension* CameraExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZChargeModule* ChargeModule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> HUDMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewYawMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostConsumptionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostRechargeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostRechargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewYawMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsOccupied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanBoost;
    
public:
    ASBZVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetInputEnabled(bool bEnable);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnPreviousSeat();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnNextSeat();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnBoostReleased();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnBoostPressed();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ExitVehicle();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_EnterVehicle(APawn* Interactor);
    
public:
    UFUNCTION(BlueprintCallable)
    bool PossessVehicle(APawn* Interactor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInteraction(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnExitVehicle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOccupied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHandbrakeActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBoosting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBoostEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVehicleSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEngineRotationSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEngineMaxRotationSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    USBZVehicleSeatComponent* GetClosestSeat(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoostPercent() const;
    
    UFUNCTION(BlueprintCallable)
    void ExitVehicle();
    
    UFUNCTION(BlueprintCallable)
    void EnterVehicle(APawn* Interactor);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void EnableCameraExtensionTick();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void DisableCameraExtensionTick();
    
};

