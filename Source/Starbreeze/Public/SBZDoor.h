#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "Engine/EngineTypes.h"
#include "ESBZDoorActionType.h"
#include "ESBZDoorInteractionPointType.h"
#include "ESBZDoorInteractionSide.h"
#include "ESBZDoorSpeedModifier.h"
#include "ESBZDoorStateType.h"
#include "OnDoorActionChangedDelegate.h"
#include "OnDoorStateChangedDelegate.h"
#include "OnDoorStateWithOldStateChangedDelegate.h"
#include "SBZBarricade.h"
#include "SBZDoorLocalDatas.h"
#include "SBZDoorNavigationObstacle.h"
#include "SBZDoorReplicatedDatas.h"
#include "SBZDoorShovePrediction.h"
#include "SBZGameplayEffectComparison.h"
#include "Templates/SubclassOf.h"
#include "SBZDoor.generated.h"

class AAkAcousticPortal;
class ASBZAICharacter;
class ASBZCharacter;
class ASBZDoor;
class UAkComponent;
class UBoxComponent;
class UMaterialInterface;
class UNavArea;
class UPrimitiveComponent;
class USBZBaseInteractorComponent;
class USBZDoorActionRestrictionsSchematic;
class USBZDoorActionsSchematic;
class USBZDoorAnimationCollectionSchematic;
class USBZDoorParticleCollectionSchematic;
class USBZDoorSoundCollectionSchematic;
class USBZDoorStatesSchematic;
class USBZInteractableComponent;
class USBZNavMeshEventListenerComponent;
class USBZOutlineComponent;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZDoor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorActionChanged OnDoorActionInteractionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorActionChanged OnDoorActionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorActionChanged OnDoorActionEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorStateChanged OnDoorStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDoorStateWithOldStateChanged OnDoorStateWithOldStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDormant: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDoorStatesSchematic* StatesSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDoorActionsSchematic* ActionsSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDoorAnimationCollectionSchematic* AnimationsSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDoorSoundCollectionSchematic* SoundsSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDoorParticleCollectionSchematic* ParticlesSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DoorFrameMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DoorMesh, meta=(AllowPrivateAccess=true))
    USkeletalMesh* OverrideMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DoorFrameMesh, meta=(AllowPrivateAccess=true))
    UStaticMesh* OverrideDoorFrameMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OverrideDoorMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OverrideDoorFrameMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OverrideBarricadePlankMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BarricadePlankMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZNavMeshEventListenerComponent* NavMeshEventListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZDoorStateType InitState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDoorActionRestrictionsSchematic* RestrictionsSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitDoorHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverBeBarricaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitBarricadePlankHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxBarricadePlankCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameplayEffectComparison EquippedBarricadeComparison;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarricadeDetectionZoneHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarricadeAdditionnalThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavObstacleSizeOffsetAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ShoveTriggerSizeOffsetAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* NavObstacle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* ShoveTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* InteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkComponent> AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAkAcousticPortal> AkAcousticPortalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAkAcousticPortal* AkAcousticPortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AcousticPortalRelativeExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AcousticLocalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcousticPortalObstructionRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> AcousticPortalObstructionCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Scene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Datas, meta=(AllowPrivateAccess=true))
    FSBZDoorReplicatedDatas ReplicatedDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZBarricade Barricade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZDoorNavigationObstacle> NavObstacles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UBoxComponent*> ShoveTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoorIsFlipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIAgglomerateCheckTimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AIAgglomerateDetectionMaxDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> PhysicalSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZNavMeshEventListenerComponent*> NavMeshEventListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ServerDoorStateType, meta=(AllowPrivateAccess=true))
    ESBZDoorStateType ServerDoorStateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarricadeThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZDoorLocalDatas LocalDatas;
    
public:
    ASBZDoor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UpdateNavMeshEventListeners();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDoor();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetupNavMeshEventListeners();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupBarricade(bool bForceCreation);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSoundSchematic(USBZDoorSoundCollectionSchematic* InSoundSchematic);
    
    UFUNCTION(BlueprintCallable)
    void SetRestrictionSchematic(USBZDoorActionRestrictionsSchematic* InActionRestrictionSchematic);
    
    UFUNCTION(BlueprintCallable)
    void SetParticleSchematic(USBZDoorParticleCollectionSchematic* InParticleSchematic);
    
    UFUNCTION(BlueprintCallable)
    void SetInitState(ESBZDoorStateType InInitState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDoorMesh(USkeletalMesh* InDoorMesh);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDoorFrameMesh(UStaticMesh* InDoorFrameMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationSchematics(USBZDoorAnimationCollectionSchematic* InAnimationSchematic);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Server_SetIsInteractive(bool bInInteractive);
    
    UFUNCTION(BlueprintCallable)
    void Server_OverrideNavAreaForState(ESBZDoorStateType StateType, TSubclassOf<UNavArea> NavArea);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Server_OpenDoor(ESBZDoorSpeedModifier InSpeedModifier, bool bFront);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Server_IsOnPath(ASBZAICharacter* AICharacter);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool Server_IsExecutingAction() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    ESBZDoorActionType Server_GetPendingAction() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    ESBZDoorStateType Server_GetCurrentState() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    ESBZDoorActionType Server_GetCurrentAction() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Server_ExecuteAction(ESBZDoorActionType ActionType, const ASBZCharacter* InInteractor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Server_CloseDoor(ESBZDoorSpeedModifier InSpeedModifier, bool bEndsInNonTraversable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Server_CancelPendingAction();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool Server_CanBeAttacked() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Server_AttackDoor(ASBZCharacter* InInteractor, bool bCanBreakDoor, bool bCanBreakBarricade, float InDamageAmount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool Server_ApplyState(ESBZDoorStateType InTargetState, ESBZDoorActionType ActionTypeCaller, bool bCanInterruptCurrentAction);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBlockedActions(const TArray<ESBZDoorActionType>& InBlockedActions);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBlockedAction(const ESBZDoorActionType InBlockedAction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveAttacker(ASBZAICharacter* Attacker);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerDoorStateType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoorMesh();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DoorFrameMesh();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Datas();
    
    UFUNCTION(BlueprintCallable)
    void OnOutlineActivated(USBZOutlineComponent* OutlineComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractorBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractableTick(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractableIsRelevantChanged(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor, bool bIsRelevant);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractableInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractableInteractionStarted(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractableInteractionEnded(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void OnAIWantToTraverseDoor(ASBZAICharacter* AICharacter);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPendingAction(ESBZDoorActionType PengingActionType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ExecuteAction(ESBZDoorActionType ActionType, ESBZDoorInteractionSide CurrentInteractorSide);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ApplyState(ESBZDoorStateType StateType, ESBZDoorActionType ActionTypeCaller);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ApplyShove(const TArray<FSBZDoorShovePrediction>& InPredictionArray);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNonTraversable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocked() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsInteractionAllowedByInteractor(const USBZBaseInteractorComponent* Interactor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHidden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClosed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterInAgglomerateDist(ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterAgainstDoor(ASBZCharacter* Character, float CharacterRadius) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBarricadeDetectionZoneTargeted(ASBZCharacter* Characher) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBarricaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionBlocked(const ESBZDoorActionType Action) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionAllowedForCharacter(ESBZDoorActionType Action, ASBZCharacter* Character) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    ESBZDoorActionType GetRelevantInteractionActionType(ASBZCharacter* Interactor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetProjectedLocationOnDoor(const FVector& Location, float Radius) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPhysicalSurface> GetPhysicalSurface() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetInteractionPoint(const ASBZCharacter* InInteractor, ESBZDoorInteractionPointType PointType, FTransform& OutTransform, float AdditionnalForwardOffset) const;
    
    UFUNCTION(BlueprintCallable)
    USBZInteractableComponent* GetInteractableComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDoorWidth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDoorThickness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetDoorMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDoorForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDoorCenter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBarricadeThickness() const;
    
    UFUNCTION(BlueprintCallable)
    float GetAIAgglomerateDetectionMaxDist();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool CanBeBarricadedBy(ASBZCharacter* Characher) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStateChanged(ESBZDoorStateType NewState, ESBZDoorStateType OldState, ASBZDoor* Door);
    
    UFUNCTION(BlueprintCallable)
    void AddBlockedActions(const TArray<ESBZDoorActionType>& InBlockedActions);
    
    UFUNCTION(BlueprintCallable)
    void AddBlockedAction(const ESBZDoorActionType InBlockedAction);
    
};

