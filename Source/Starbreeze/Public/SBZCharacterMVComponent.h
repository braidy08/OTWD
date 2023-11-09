#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ClimbTrajectory.h"
#include "EClimbType.h"
#include "MinimalClimbTrajectory.h"
#include "OnCanVaultMantleChangeDelegate.h"
#include "SBZCharacterMVComponent.generated.h"

class ASBZCharacter;
class ASBZMVNavLinkProxy;
class ASBZPlayerCameraManager;
class USBZMantlingVaultingSchematic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZCharacterMVComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMVActionStartedDelegate, EClimbType, StartedMVAction);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMVActionEndedDelegate, EClimbType, EndedMVAction);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMantlingVaultingSchematic* VaultingSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMantlingVaultingSchematic* MantlingSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoComputeTrajectories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoComputeTimeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraBlendTotalTimePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraMaxYawFromAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraMaxPitchFromAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreMVVolumes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCanVaultMantleChange OnCanVaultMantleChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVActionStartedDelegate OnMVActionStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVActionEndedDelegate OnMVActionEndedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* OwningCharacter;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZMVNavLinkProxy> CurNavLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCameraManager* OwningPlayerCameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VaultingStartHeight;
    
public:
    USBZCharacterMVComponent();
    UFUNCTION(BlueprintCallable)
    void TickMantlingVaulting(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopMantlingVaulting();
    
    UFUNCTION(BlueprintCallable)
    bool StartMantlingVaultingWithCustomTrajectory(const FClimbTrajectory& Trajectory);
    
    UFUNCTION(BlueprintCallable)
    void StartMantlingVaulting(const FMinimalClimbTrajectory& MinimalTrajectory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopMantlingVaulting();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartMantlingVaulting(const FMinimalClimbTrajectory& MinimalTrajectory);
    
    UFUNCTION(BlueprintCallable)
    void ResetMoveToInteraction();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_StopMantlingVaulting(bool bServerDecision);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_StartMantlingVaulting(const FMinimalClimbTrajectory& MinimalTrajectory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVaultingLoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVaultingExit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVaultingEnter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVaulting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMantlingLoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMantlingExit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMantlingEnter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMantling() const;
    
    UFUNCTION(BlueprintCallable)
    void Init(ASBZCharacter* InOwningCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIKInterpolationFactor() const;
    
    UFUNCTION(BlueprintCallable)
    void ComputeMantlingVaultingTrajectory(bool bDebug, const FVector& StartLocation, const FVector& EndLocation, const FVector& Forward, const bool bUseProvidedLocations, const bool bComputeHands, const bool bComputeSurfaceType, const float InCharacterSpeed);
    
    UFUNCTION(BlueprintCallable)
    bool CanExecuteMoveToInteraction();
    
};

