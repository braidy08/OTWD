#include "SBZLadder.h"
#include "Components/BoxComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"
#include "SBZInteractableComponent.h"
#include "SBZNavArea_Ladder.h"

void ASBZLadder::ShowGhost_Implementation(bool bShow) {
}

void ASBZLadder::SetLadderActive_Implementation(bool bInLadderActive) {
}

void ASBZLadder::SetGhostModeActive_Implementation(bool bActive) {
}

void ASBZLadder::Server_SetLadderActive(bool bActive) {
}

void ASBZLadder::Server_SetGhostModeActive(bool bActive) {
}

void ASBZLadder::RemoveClimbingCharacter(ASBZCharacter* InCharacter) {
}

void ASBZLadder::OnRep_ServerGhostMode() {
}

void ASBZLadder::OnRep_LadderActive() {
}

void ASBZLadder::OnInteractableInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}

void ASBZLadder::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZLadder::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZLadder::NetMulticast_SetLadderActive_Implementation(bool bActive) {
}

void ASBZLadder::NetMulticast_SetGhostModeActive_Implementation(bool bActive) {
}

bool ASBZLadder::IsLadderEmpty() const {
    return false;
}

bool ASBZLadder::IsLadderActive() const {
    return false;
}

bool ASBZLadder::IsInGhostMode() const {
    return false;
}

float ASBZLadder::GetTreadStep() const {
    return 0.0f;
}

FRotator ASBZLadder::GetLadderRotation() const {
    return FRotator{};
}

FVector ASBZLadder::GetLadderRight() const {
    return FVector{};
}

FVector ASBZLadder::GetLadderForward() const {
    return FVector{};
}

float ASBZLadder::GetInterpToUpperTread(FVector CurrentLocation, uint8 NumberOftread) const {
    return 0.0f;
}

bool ASBZLadder::GetClosestTreadLocation(const FVector& CurrentLocation, float CharacterHeight, FVector& OutTreadLocation) const {
    return false;
}

FVector ASBZLadder::GetClosestPoint(const FVector CurrentLocation) const {
    return FVector{};
}

void ASBZLadder::AddClimbingCharacter(ASBZCharacter* InCharacter) {
}

void ASBZLadder::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZLadder, bServerGhostMode);
    DOREPLIFETIME(ASBZLadder, bLadderActive);
}

ASBZLadder::ASBZLadder() {
    this->TriggerAreaThickness = 1;
    this->TriggerAreaHeightExceed = 1;
    this->TreadStep = 1;
    this->LadderOrientation = ESBZLadderOrientation::FrontSide;
    this->TriggerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerArea"));
    this->LadderPartCount = 0;
    this->TopMesh = NULL;
    this->MiddleMesh = NULL;
    this->BottomMesh = NULL;
    this->bGhostMode = false;
    this->bServerGhostMode = false;
    this->bCanEverBeInGhostMode = false;
    this->bLadderActive = true;
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("InteractableComponent"));
    this->NavLinkChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("NavLinkChildActorComponent"));
    this->NavLinkDirection = ESBZLadderNavLinkDirection::BottomToTop;
    this->NavArea = USBZNavArea_Ladder::StaticClass();
    this->NavLinkSnapRadius = 1;
    this->bHackUpdateLadder = false;
    this->Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

