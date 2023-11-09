#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ESBZLadderClimbActionType.h"
#include "ESBZLadderDirection.h"
#include "ESBZLadderSoundType.h"
#include "SBZClimbDatas.h"
#include "SBZClimbComponent.generated.h"

class ASBZAICharacter;
class ASBZCharacter;
class ASBZLadder;
class UAnimMontage;
class UCapsuleComponent;
class USBZCharacterMovementComponent;
class USBZClimbSchematic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZClimbComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClimbActionStartedDelegate, ESBZLadderClimbActionType, StartedClimbAction);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClimbActionEndedDelegate, ESBZLadderClimbActionType, EndedClimbAction);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClimbActionStartedDelegate OnClimbActionStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClimbActionEndedDelegate OnClimbActionEndedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZClimbSchematic* Schematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ServerClimbDatas, meta=(AllowPrivateAccess=true))
    FSBZClimbDatas ServerClimbDatas;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZLadder> CurrentLadder;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZLadder> CurrentWaitingForLadder;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZCharacter> OwningCharacter;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USBZCharacterMovementComponent> MovementComponent;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCapsuleComponent> CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentPlayingMontage;
    
public:
    USBZClimbComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WantToClimb(bool bCheckAngle) const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnimation(float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TickClimbComponent(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopClimbing();
    
    UFUNCTION(BlueprintCallable)
    void StartClimbing();
    
    UFUNCTION(BlueprintCallable)
    void SetSchematics(USBZClimbSchematic* InSchematics, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementInput(FVector MovementInput);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentWaitingForLadder(ASBZLadder* InLadder);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentLadder(ASBZLadder* InLadder);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StopClimbing();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_StartClimbing(ASBZLadder* InLadder, ESBZLadderClimbActionType ClimbActionType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetClimbActionType(ESBZLadderClimbActionType InClimbActionType, ASBZLadder* InCurrentLadder);
    
    UFUNCTION(BlueprintCallable)
    void ResetMoveToInteraction();
    
    UFUNCTION(BlueprintCallable)
    bool ReserveLadder();
    
    UFUNCTION(BlueprintCallable)
    void PlaySoundEvent(ESBZLadderSoundType SoundType, FName SocketName, bool bAttach);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerClimbDatas();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_StopClimbing();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_StartClimbing(ASBZLadder* InLadder, ESBZLadderClimbActionType ClimbActionType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetClimbActionType(ESBZLadderClimbActionType InClimbActionType, ASBZLadder* InCurrentLadder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSnapping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLadderEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClimbing() const;
    
    UFUNCTION(BlueprintCallable)
    void InternalStopClimbing();
    
    UFUNCTION(BlueprintCallable)
    void InternalStartClimbing(ASBZLadder* InLadder, ESBZLadderClimbActionType ClimbActionType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeMoveToInteraction(ASBZAICharacter* Owner);
    
    UFUNCTION(BlueprintCallable)
    void Init(ASBZCharacter* InOwningCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLadder() const;
    
    UFUNCTION(BlueprintCallable)
    float GetNormalizedClimbTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLadderWaitingNodeLocation(FVector& WaitingNodeLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFacingLadderAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZLadder* GetCurrentWaitingForLader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZLadder* GetCurrentLadder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetClosestEntryPoint(FVector& OutClosestEntryPoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZLadderDirection GetCharacterLadderDirection() const;
    
    UFUNCTION(BlueprintCallable)
    void ExitLadderArea(ASBZLadder* InLadder);
    
    UFUNCTION(BlueprintCallable)
    void EnterLadderArea(ASBZLadder* InLadder);
    
    UFUNCTION(BlueprintCallable)
    void EnableCameraModifier();
    
    UFUNCTION(BlueprintCallable)
    void DisableCameraModifier();
    
    UFUNCTION(BlueprintCallable)
    bool CanExecuteMoveToInteraction();
    
    UFUNCTION(BlueprintCallable)
    bool CanClimb();
    
    UFUNCTION(BlueprintCallable)
    void CacheDirectionOnLadder(ESBZLadderDirection InDirection);
    
};

