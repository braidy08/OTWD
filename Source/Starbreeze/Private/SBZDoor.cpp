#include "SBZDoor.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"
#include "SBZNavMeshEventListenerComponent.h"
#include "Templates/SubclassOf.h"

void ASBZDoor::UpdateNavMeshEventListeners() {
}

void ASBZDoor::UpdateDoor() {
}

void ASBZDoor::SetupNavMeshEventListeners() {
}

void ASBZDoor::SetupBarricade(bool bForceCreation) {
}

void ASBZDoor::SetSoundSchematic(USBZDoorSoundCollectionSchematic* InSoundSchematic) {
}

void ASBZDoor::SetRestrictionSchematic(USBZDoorActionRestrictionsSchematic* InActionRestrictionSchematic) {
}

void ASBZDoor::SetParticleSchematic(USBZDoorParticleCollectionSchematic* InParticleSchematic) {
}

void ASBZDoor::SetInitState(ESBZDoorStateType InInitState) {
}

void ASBZDoor::SetDoorMesh(USkeletalMesh* InDoorMesh) {
}

void ASBZDoor::SetDoorFrameMesh(UStaticMesh* InDoorFrameMesh) {
}

void ASBZDoor::SetAnimationSchematics(USBZDoorAnimationCollectionSchematic* InAnimationSchematic) {
}

void ASBZDoor::Server_SetIsInteractive(bool bInInteractive) {
}

void ASBZDoor::Server_OverrideNavAreaForState(ESBZDoorStateType StateType, TSubclassOf<UNavArea> NavArea) {
}

bool ASBZDoor::Server_OpenDoor(ESBZDoorSpeedModifier InSpeedModifier, bool bFront) {
    return false;
}

bool ASBZDoor::Server_IsOnPath(ASBZAICharacter* AICharacter) {
    return false;
}

bool ASBZDoor::Server_IsExecutingAction() const {
    return false;
}

ESBZDoorActionType ASBZDoor::Server_GetPendingAction() const {
    return ESBZDoorActionType::None;
}

ESBZDoorStateType ASBZDoor::Server_GetCurrentState() const {
    return ESBZDoorStateType::NonTraversable;
}

ESBZDoorActionType ASBZDoor::Server_GetCurrentAction() const {
    return ESBZDoorActionType::None;
}

bool ASBZDoor::Server_ExecuteAction(ESBZDoorActionType ActionType, const ASBZCharacter* InInteractor) {
    return false;
}

bool ASBZDoor::Server_CloseDoor(ESBZDoorSpeedModifier InSpeedModifier, bool bEndsInNonTraversable) {
    return false;
}

void ASBZDoor::Server_CancelPendingAction() {
}

bool ASBZDoor::Server_CanBeAttacked() const {
    return false;
}

bool ASBZDoor::Server_AttackDoor(ASBZCharacter* InInteractor, bool bCanBreakDoor, bool bCanBreakBarricade, float InDamageAmount) {
    return false;
}

bool ASBZDoor::Server_ApplyState(ESBZDoorStateType InTargetState, ESBZDoorActionType ActionTypeCaller, bool bCanInterruptCurrentAction) {
    return false;
}

void ASBZDoor::RemoveBlockedActions(const TArray<ESBZDoorActionType>& InBlockedActions) {
}

void ASBZDoor::RemoveBlockedAction(const ESBZDoorActionType InBlockedAction) {
}

void ASBZDoor::RemoveAttacker(ASBZAICharacter* Attacker) {
}

void ASBZDoor::OnRep_ServerDoorStateType() {
}

void ASBZDoor::OnRep_DoorMesh() {
}

void ASBZDoor::OnRep_DoorFrameMesh() {
}

void ASBZDoor::OnRep_Datas() {
}

void ASBZDoor::OnOutlineActivated(USBZOutlineComponent* OutlineComponent) {
}

void ASBZDoor::OnInteractorBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZDoor::OnInteractableTick(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor) {
}

void ASBZDoor::OnInteractableIsRelevantChanged(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor, bool bIsRelevant) {
}

void ASBZDoor::OnInteractableInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}

void ASBZDoor::OnInteractableInteractionStarted(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor) {
}

void ASBZDoor::OnInteractableInteractionEnded(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor) {
}

void ASBZDoor::OnAIWantToTraverseDoor(ASBZAICharacter* AICharacter) {
}

void ASBZDoor::Multicast_SetPendingAction_Implementation(ESBZDoorActionType PengingActionType) {
}

void ASBZDoor::Multicast_ExecuteAction_Implementation(ESBZDoorActionType ActionType, ESBZDoorInteractionSide CurrentInteractorSide) {
}

void ASBZDoor::Multicast_ApplyState_Implementation(ESBZDoorStateType StateType, ESBZDoorActionType ActionTypeCaller) {
}

void ASBZDoor::Multicast_ApplyShove_Implementation(const TArray<FSBZDoorShovePrediction>& InPredictionArray) {
}

bool ASBZDoor::IsOpen() const {
    return false;
}

bool ASBZDoor::IsNonTraversable() const {
    return false;
}

bool ASBZDoor::IsLocked() const {
    return false;
}

bool ASBZDoor::IsInteractionAllowedByInteractor(const USBZBaseInteractorComponent* Interactor) {
    return false;
}

bool ASBZDoor::IsHidden() const {
    return false;
}

bool ASBZDoor::IsClosed() const {
    return false;
}

bool ASBZDoor::IsCharacterInAgglomerateDist(ASBZCharacter* Character) const {
    return false;
}

bool ASBZDoor::IsCharacterAgainstDoor(ASBZCharacter* Character, float CharacterRadius) const {
    return false;
}

bool ASBZDoor::IsBroken() const {
    return false;
}

bool ASBZDoor::IsBarricadeDetectionZoneTargeted(ASBZCharacter* Characher) const {
    return false;
}

bool ASBZDoor::IsBarricaded() const {
    return false;
}

bool ASBZDoor::IsActionBlocked(const ESBZDoorActionType Action) const {
    return false;
}

bool ASBZDoor::IsActionAllowedForCharacter(ESBZDoorActionType Action, ASBZCharacter* Character) const {
    return false;
}

ESBZDoorActionType ASBZDoor::GetRelevantInteractionActionType(ASBZCharacter* Interactor) const {
    return ESBZDoorActionType::None;
}

FVector ASBZDoor::GetProjectedLocationOnDoor(const FVector& Location, float Radius) const {
    return FVector{};
}

TEnumAsByte<EPhysicalSurface> ASBZDoor::GetPhysicalSurface() const {
    return SurfaceType_Default;
}

bool ASBZDoor::GetInteractionPoint(const ASBZCharacter* InInteractor, ESBZDoorInteractionPointType PointType, FTransform& OutTransform, float AdditionnalForwardOffset) const {
    return false;
}

USBZInteractableComponent* ASBZDoor::GetInteractableComponent() {
    return NULL;
}

float ASBZDoor::GetHealth() const {
    return 0.0f;
}

float ASBZDoor::GetDoorWidth() const {
    return 0.0f;
}

float ASBZDoor::GetDoorThickness() const {
    return 0.0f;
}

USkeletalMeshComponent* ASBZDoor::GetDoorMesh() const {
    return NULL;
}

FVector ASBZDoor::GetDoorForward() const {
    return FVector{};
}

FVector ASBZDoor::GetDoorCenter() const {
    return FVector{};
}

float ASBZDoor::GetBarricadeThickness() const {
    return 0.0f;
}

float ASBZDoor::GetAIAgglomerateDetectionMaxDist() {
    return 0.0f;
}

bool ASBZDoor::CanBeBarricadedBy(ASBZCharacter* Characher) const {
    return false;
}


void ASBZDoor::AddBlockedActions(const TArray<ESBZDoorActionType>& InBlockedActions) {
}

void ASBZDoor::AddBlockedAction(const ESBZDoorActionType InBlockedAction) {
}

void ASBZDoor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZDoor, OverrideMesh);
    DOREPLIFETIME(ASBZDoor, OverrideDoorFrameMesh);
    DOREPLIFETIME(ASBZDoor, ReplicatedDatas);
    DOREPLIFETIME(ASBZDoor, ServerDoorStateType);
}

ASBZDoor::ASBZDoor() {
    this->bDormant = true;
    this->StatesSchematic = NULL;
    this->ActionsSchematic = NULL;
    this->AnimationsSchematic = NULL;
    this->SoundsSchematic = NULL;
    this->ParticlesSchematic = NULL;
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->DoorFrameMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrameMesh"));
    this->OverrideMesh = NULL;
    this->OverrideDoorFrameMesh = NULL;
    this->BarricadePlankMesh = NULL;
    this->NavMeshEventListener = CreateDefaultSubobject<USBZNavMeshEventListenerComponent>(TEXT("NavMeshEventListenerComponent"));
    this->InitState = ESBZDoorStateType::NonTraversable;
    this->RestrictionsSchematic = NULL;
    this->InitDoorHealth = 1;
    this->bCanEverBeBarricaded = true;
    this->InitBarricadePlankHealth = 1;
    this->MaxBarricadePlankCount = 3;
    this->BarricadeDetectionZoneHeight = 1;
    this->BarricadeAdditionnalThickness = 1;
    this->CollisionBoneName = TEXT("BN_Collision");
    this->InteractionMaxDistance = 1;
    this->NavObstacle = CreateDefaultSubobject<UBoxComponent>(TEXT("NavModifierBoxComponent"));
    this->ShoveTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapDetectorBoxComponent"));
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("InteractableComponent"));
    this->AkAcousticPortalClass = NULL;
    this->AkAcousticPortal = NULL;
    this->AcousticPortalObstructionRefreshInterval = 1;
    this->AcousticPortalObstructionCollisionChannel = ECC_Visibility;
    this->Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->bDoorIsFlipped = false;
    this->bFlipDoor = false;
    this->AIAgglomerateCheckTimeInterval = 1;
    this->AIAgglomerateDetectionMaxDist = 1;
    this->PhysicalSurface = SurfaceType_Default;
    this->ServerDoorStateType = ESBZDoorStateType::NonTraversable;
    this->DoorWidth = 1;
    this->DoorThickness = 1;
    this->BarricadeThickness = 1;
}

